const notesContainer = document.querySelector("#notes-container");
const noteInput = document.querySelector("#note-content");
const addNoteBtn = document.querySelector(".add-note");
const searchInput = document.querySelector("#search-input");
const exportBtn = document.querySelector("#export-notes");

function showNotes() {
  cleanNotes();

  getNotes().forEach((note) => {
    const noteElement = createNote(note.id, note.content, note.fixed);
    notesContainer.appendChild(noteElement);
  });
}

function getNotes() {
  const notes = JSON.parse(localStorage.getItem("notes") || "[]");

  const orderedNotes = notes.sort((a, b) => (a.fixed > b.fixed ? -1 : 1));

  return orderedNotes;
}

function cleanNotes() {
  notesContainer.replaceChildren([]);
}

function saveNotes(notes) {
  localStorage.setItem("notes", JSON.stringify(notes));
}

function createNote(id, content, fixed) {
  const element = document.createElement("div");
  element.classList.add("note");

  const textarea = document.createElement("textarea");
  textarea.value = content;
  textarea.placeholder = "Adicione algum texto...";
  element.appendChild(textarea);

  if (fixed) {
    element.classList.add("fixed");
  }

  const pinIcon = document.createElement("i");
  pinIcon.classList.add("bi", "bi-pin");
  element.appendChild(pinIcon);

  const deleteIcon = document.createElement("i");
  deleteIcon.classList.add("bi", "bi-x-lg");
  element.appendChild(deleteIcon);

  const duplicateIcon = document.createElement("i");
  duplicateIcon.classList.add("bi", "bi-file-earmark-plus");
  element.appendChild(duplicateIcon);

  textarea.addEventListener("input", () => {
    const noteContent = textarea.value;
    updateNote(id, noteContent);
  });

  deleteIcon.addEventListener("click", () => {
    deleteNote(id, element);
  });

  pinIcon.addEventListener("click", () => {
    toggleFixNote(id);
  });

  duplicateIcon.addEventListener("click", () => {
    copyNote(id);
  });

  return element;
}

function addNote() {
  if (!noteInput.value.trim()) return;

  const notes = getNotes();

  const noteObject = {
    id: generateId(),
    content: noteInput.value,
    fixed: false,
  };

  const noteElement = createNote(noteObject.id, noteObject.content, noteObject.fixed);
  notesContainer.appendChild(noteElement);

  notes.push(noteObject);
  saveNotes(notes);

  noteInput.value = "";
}

function generateId() {
  return Date.now();
}

function updateNote(id, newContent) {
  const notes = getNotes();
  const targetNote = notes.find((note) => note.id === id);

  if (targetNote) {
    targetNote.content = newContent;
    saveNotes(notes);
  }
}

function deleteNote(id, element) {
  const notes = getNotes().filter((note) => note.id !== id);
  saveNotes(notes);
  notesContainer.removeChild(element);
}

function toggleFixNote(id) {
  const notes = getNotes();
  const targetNote = notes.find((note) => note.id === id);

  if (targetNote) {
    targetNote.fixed = !targetNote.fixed;
    saveNotes(notes);
    showNotes();
  }
}

function searchNotes(search) {
  const searchResults = getNotes().filter((note) =>
    note.content.toLowerCase().includes(search.toLowerCase())
  );

  if (search !== "") {
    cleanNotes();

    searchResults.forEach((note) => {
      const noteElement = createNote(note.id, note.content, note.fixed);
      notesContainer.appendChild(noteElement);
    });

    return;
  }

  cleanNotes();
  showNotes();
}

function copyNote(id) {
  const notes = getNotes();
  const targetNote = notes.find((note) => note.id === id);

  if (!targetNote) return;

  const noteObject = {
    id: generateId(),
    content: targetNote.content,
    fixed: false,
  };

  const noteElement = createNote(noteObject.id, noteObject.content, false);
  notesContainer.appendChild(noteElement);

  notes.push(noteObject);
  saveNotes(notes);
}

function exportData() {
  const notes = getNotes();

  const csvString = [
    ["ID", "Conteúdo", "Fixado?"],
    ...notes.map((note) => [
      note.id,
      `"${note.content.replace(/"/g, '""')}"`,
      note.fixed ? "Sim" : "Não",
    ]),
  ]
    .map((e) => e.join(","))
    .join("\n");

  const element = document.createElement("a");
  element.href = "data:text/csv;charset=utf-8,\uFEFF" + encodeURIComponent(csvString);
  element.target = "_blank";
  element.download = "export.csv";
  element.click();
}

addNoteBtn.addEventListener("click", () => addNote());

searchInput.addEventListener("input", (e) => {
  const search = e.target.value;
  searchNotes(search);
});

noteInput.addEventListener("keydown", (e) => {
  if (e.key === "Enter") {
    addNote();
  }
});

exportBtn.addEventListener("click", () => {
  exportData();
});

showNotes();
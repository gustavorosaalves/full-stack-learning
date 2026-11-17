const multiplicationForm = document.querySelector("#multiplication-form");
const numberInput = document.querySelector("#number");
const multiplicationInput = document.querySelector("#multiplicator");
const multiplicationTitle = document.querySelector("#multiplication-title");
const multiplicationTitleValue = multiplicationTitle.querySelector("span");
const multiplicationTable = document.querySelector(".multiplication-operations");

const createTable = (number, multiplicatorNumber) => {
    multiplicationTable.replaceChildren();

    for (let i = 1; i <= multiplicatorNumber; i++) {
        const row = document.createElement("div");
        row.className = "row";

        const operation = document.createElement("div");
        operation.className = "operation";
        operation.textContent = `${number} x ${i} =`;

        const result = document.createElement("div");
        result.className = "result";
        result.textContent = number * i;

        row.append(operation, result);
        multiplicationTable.appendChild(row);
    }

    multiplicationTitleValue.textContent = number;
    multiplicationTitle.hidden = false;
};

multiplicationForm.addEventListener("submit", (event) => {
    event.preventDefault();

    const number = numberInput.valueAsNumber;
    const multiplicatorNumber = multiplicationInput.valueAsNumber;

    if (
        !Number.isFinite(number) ||
        !Number.isInteger(multiplicatorNumber) ||
        multiplicatorNumber < 1
    ) {
        multiplicationForm.reportValidity();
        return;
    }

    createTable(number, multiplicatorNumber);
});

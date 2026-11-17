const container = document.querySelector(".container");
const qrCodeBtn = document.querySelector("#qr-form button");
const qrCodeInput = document.querySelector("#qr-form input");
const qrCodeImg = document.querySelector("#qr-code img");

function generateQrCode() {
  const value = qrCodeInput.value.trim();
  if (!value) {
    qrCodeInput.focus();
    return;
  }

  qrCodeBtn.innerText = "Gerando código...";
  qrCodeBtn.disabled = true;
  container.classList.remove("active");

  qrCodeImg.onload = () => {
    container.classList.add("active");
    qrCodeBtn.innerText = "Código criado!";
    qrCodeBtn.disabled = false;
  };

  qrCodeImg.onerror = () => {
    qrCodeBtn.innerText = "Erro ao gerar. Tente novamente";
    qrCodeBtn.disabled = false;
  };

  qrCodeImg.src = `https://api.qrserver.com/v1/create-qr-code/?size=150x150&data=${encodeURIComponent(value)}`;
}

qrCodeBtn.addEventListener("click", generateQrCode);

qrCodeInput.addEventListener("keydown", (event) => {
  if (event.key === "Enter") generateQrCode();
});

qrCodeInput.addEventListener("input", () => {
  if (!qrCodeInput.value.trim()) {
    container.classList.remove("active");
    qrCodeBtn.innerText = "Gerar QR Code";
    qrCodeBtn.disabled = false;
    qrCodeImg.removeAttribute("src");
  }
});

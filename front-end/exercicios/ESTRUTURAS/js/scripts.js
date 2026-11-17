let nome = "Gustavo";
console.log(nome);

nome = "Gustavo Rosa";
console.log(nome);

const idade = 31;
console.log(idade);

console.log(typeof nome);
console.log(typeof idade);

let a = 10, b = 20, c = 30;
console.log(a, b, c);

const nomecompleto = "Gustavo Rosa";
const nomeCompleto = "Leila Mendes";
console.log(nomecompleto);
console.log(nomeCompleto);

let _teste = "ok";
let $teste = "ok";
console.log(_teste, $teste);

const age = prompt("Digite a sua idade:");
console.log(`Você tem ${age} anos.`);

alert("Testando");
const z = 10;
alert(`O número é ${z}`);

console.log(Math.max(5, 2, 1, 10));
console.log(Math.floor(5.14));
console.log(Math.ceil(5.14));

console.log("Teste!");
console.error("Erro!");
console.warn("Aviso!");

const m = 10;

if (m > 5) {
    console.log("M é maior que 5!");
}

const user = "João";

if (user === "João") {
    console.log("Olá João!");
}

if (user === "Maria") {
    console.log("Olá Maria!");
}

console.log(user === "João", user === "Maria");

const loggedIn = false;

if (loggedIn) {
    console.log("Está autenticado!");
} else {
    console.log ("Não está autenticado!");
}

const q = 10;
const w = 15;

if (q > 5 && w > 20) {
    console.log ("Números mais altos");
} else {
    console.log ("Os números não são mais altos");
}

if (1 > 2) {
    console.log ("Teste");
} else if (2 > 3) {
    console.log("Teste 2");
} else if (5 > 1) {
    console.log ("Agora sim!");
}

const userName = "Gustavo";
const userAge = 19;

if (userName === "José") {
    console.log("Bem vindo José");
} else if (userName === "Gustavo" && userAge === 19) {
    console.log("Olá Gustavo, você tem 19 anos");
} else {
    console.log ("Nenhuma condição aceita!");
}

let p = 10;

while (p < 5) {
    console.log(`Repetindo ${p}`);
    p = p + 1;
}

let o = 10;

do {
    console.log(`Valor de o: ${o}`);
    o--;
} while (o > 1);

for (let t = 0; t < 10; t++) {
    console.log("Repetindo algo...");
}

let r = 10;

for (r; r > 0; r = r - 1) {
    console.log(`O r está diminuindo: ${r}`);
}

for (let u = 0; u < 10; u++) {
    if (u * 2 > 10) {  
        console.log(`Maior que 10! ${u}`);
    } else {
        if (u / 2 === 0) {
            console.log("Deu 0");
        }
    }
}

for (let g = 20; g > 10; g--) {
    console.log(`O valor de g é: ${g}`);

    if(g === 12) {
        console.log("O g é 12!")
        break;
    }
}

for (let s = 1; s < 10; s = s + 1) {
    if(s % 2 === 0) {
        console.log("Número par!");
        continue;
    }

    console.log(s);
}

const job = "Advogado";

switch(job) {
    case "Programador":
        console.log("Você é um programador!");
        break;
    case "Advogado":
        console.log("Você é um advogado!");
        break;
    case "Engenheiro":
        console.log("Você é um engenheiro!");
        break;
    default:
        console.log("Profissão não encontrada");
}
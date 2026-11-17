const lista = [1, 2, 3, 4, 5]
console.log(lista);
console.log(typeof lista);

const itens = ["Gustavo", true, 2, 4.12, []]
console.log(itens);

const numbers = [5, 3, 4]
console.log(numbers.length);

const myName = "Gustavo";
console.log(myName.length);

const arr = ["a", "b", "c", "d"]
console.log(arr[0]);
console.log(arr[2]);
console.log(arr[83]);

const otherNumbers = [1, 2, 3]
const allNumbers = numbers.concat(otherNumbers);
console.log(allNumbers);

const text = "algum texto";
console.log(text.toUpperCase());
console.log(typeof text.toUpperCase);
console.log(text.indexOf("g"));

const person = {
    name: "Gustavo",
    age: 19,
    job: "Programador",
};

console.log(person);
console.log(person.name);
console.log(person.name.length);
console.log(typeof person);

const car = {
    engine: 2.0,
    brand: "VW",
    model: "Tinguan",
    km: 20000,
};

console.log(car);

car.doors= 4;
console.log(car);

delete car.km;
console.log(car);

const obj = {
    a: "teste",
    b: true,
};

console.log(obj instanceof Object);

const obj2 = {
    c: [],
};

Object.assign(obj2, obj);
console.log(obj2);

console.log(Object.keys(obj));
console.log(Object.keys(obj2));
console.log(Object.keys(car));
console.log(Object.entries(car));

const a = {
    name: "Gugu",
};

const b = a;
console.log(a);
console.log(b);

console.log(a===b);

a.age = 31;
console.log(a);
console.log(b);

delete b.age;
console.log(a);
console.log(b);

const users = ["Matheus", "João", "Pedro", "Miguel"]

for(let i = 0; i < users.length; i++) {
    console.log(`Listando o usuário: ${users[i]}`);
}

const array = ["a", "b", "c"]

array.push("d");
console.log(array);
console.log(array.length);

array.pop();
console.log(array);

const itemRemovido = array.pop();

console.log(itemRemovido);
console.log(array);

array.push("z", "x", "z");
console.log(array);

const letters = ["a", "b", "c"]

const letter = letters.shift();
console.log(letter);
console.log(letters);

letters.unshift("p", "q", "r");
letters.unshift("z");
console.log(letters);

const myElements = ["Morango", "Maçã", "Abacate", "Pêra", "Abacate"]
console.log(myElements.indexOf("Maçã"));
console.log(myElements.indexOf("Abacate"));
console.log(myElements[2]);
console.log(myElements[myElements.indexOf("Abacate")]);
console.log(myElements.lastIndexOf("Abacate"));
console.log(myElements.indexOf("Mamão"));
console.log(myElements.lastIndexOf("Mamão"));

const testeSlice = ["a", "b", "c", "d", "e", "f"]
const subArray = testeSlice.slice(2, 4)
console.log(subArray);
console.log(testeSlice);

const subArray2 = testeSlice.slice(2, 4 + 1)
console.log(subArray2);

const subArray3 = testeSlice.slice(10, 20)
console.log(subArray3);

const subArray4 = testeSlice.slice(2)
console.log(subArray4);

const nums = [1, 2, 3, 4, 5];

nums.forEach((numero) => {
    console.log(`O número é: ${numero}`);
});

const posts = [
    {title: "Primeiro post", category: "PHP"},
    {title: "Segundo post", category: "JavaScript"},
    {title: "Terceiro post", category: "Python"},
];

posts.forEach((post) => {
    console.log(`Exibindo post: ${post.title}, da categoria: ${post.category}`);
});

const brands = ["BMW", "VW", "Fiat"];
console.log(brands.includes("Fiat"));
console.log(brands.includes("KIA"));

if(brands.includes("BMW")) {
    console.log("Há carros da marca BMW!");
}

const reverseTest = [1, 2, 3, 4, 5];
reverseTest.reverse();
console.log(reverseTest);

const trimTest = "   testando \n   ";
console.log(trimTest);
console.log(trimTest.trim());
console.log(trimTest.length);
console.log(trimTest.trim().length);

const testePadStart = "1";
const newNumber = testePadStart.padStart(4, "0");
console.log(testePadStart);
console.log(newNumber);

const testePadEnd = newNumber.padEnd(10, "0");
console.log(testePadEnd);

const frase = "O rato roeu a roupa do rei de Roma";
const arrayDaFrase = frase.split(" ");
console.log(arrayDaFrase);

const fraseDenovo = arrayDaFrase.join(" ");
console.log(fraseDenovo);

const itensParaComprar = ["Mouse", "Teclado", "Monitor"]
const fraseDeCompra = `Precisamos comprar: ${itensParaComprar.join(", ")}`
console.log(fraseDeCompra);

const palavra = "Testando ";
console.log(palavra.repeat(5));

const somaInfinita = (...args) => {
    
    let total = 0;

    for(let i = 0; i < args.length; i++) {
        total += args[i];
    }

    return total;
};

console.log(somaInfinita(1, 2, 3));
console.log(somaInfinita(1, 20, 34, 3424, 1288812, 12445, 12, 23, 54, 12));

const somaInfinita2 = (...args) => {

    let total = 0

    for(num of args) {
        total += num;
    }

    return total;
};

console.log(somaInfinita2(1, 2, 4));
console.log(somaInfinita2(12, 1234, 17367, 12, 456));

const userDetails = {
    firstName: "Gustavo",
    lastName: "Alves",
    job: "Dev",
};

const {firstName, lastName, job} = userDetails;
console.log(firstName, lastName, job);

const {firstName: primeiroNome} = userDetails;
console.log(firstName);

const myList = ["Avião", "Submarino", "Carro"];

const [veiculoA, veiculoB, veiculoC] = myList;
console.log(veiculoA, veiculoB, veiculoC);

const myJson = '{"name": "Gustavo", "age": 19, "skills": ["C++", "JS", "Python"]}';
console.log(myJson);
console.log(typeof myJson);

const myObject = JSON.parse(myJson)
console.log(myObject);
console.log(myObject.name);
console.log(typeof myObject);

//const badJson = '{"name": Gustavo, "age": 19}';
//const myBadObject = JSON.parse(badJson); //erro! Não tem aspas no nome

myObject.isOpenToWork = true;
console.log(myObject);

const myNewJson = JSON.stringify(myObject);
console.log(myNewJson);
console.log(typeof myNewJson);


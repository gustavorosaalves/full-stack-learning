console.log("Javascript Funcionando");

let firstName = "Gustavo";
let lastname = "Alves";
console.log(firstName);
console.log(lastname);

let FirstName = "Gustavo2";
console.log(FirstName);

const price = 30;
// price = 20;
console.log(price);

let itemName = "Pen";
let itemPrice = 3;
let itemAvailable = true;
let itemColor = "Red";

let pen = {
    itemName: "Pen",
    itemPrice: 3,
    itemAvailable: true,
    itemColor: "Red"
};

pen.itemColor = "Blue";
console.log(pen);

let friends = ["Dudu", "Simão", "Sofia"];
friends[2] = "Junior";
console.log(friends);

function saleStatus(status, total) {
    console.log("Transaction " + status + "! Total amount: $" + total);
};

saleStatus("Approved", 30);

function percentage10(price) {
    return price - (price * 10 / 100);
};

 console.log(percentage10(40));



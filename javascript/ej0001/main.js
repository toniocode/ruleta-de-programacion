// Pedir un número por teclado y decir si es primo o no

const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Introduce un número: ", (input) => {
    let num = Number(input);
    let esPrimo = true;

    for (let i = 2; i < num; i++) {
        if (num % i == 0) {
            esPrimo = false;
            break;
        }
    }

    console.log(esPrimo ? "✅ Es primo" : "❌ No es primo");
    rl.close();
});
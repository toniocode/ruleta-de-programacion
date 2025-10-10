// Pedir una palabra y mostrar cuántas vocales contiene.

const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Introduce una palabra: ", (input) => {
    const vocales = "aeiou";
    let contador = 0;

    const palabra = input.toLowerCase();
    for (let letra of palabra) {
        if (vocales.includes(letra)) {
            contador++;
        }
    }
    console.log(`La palabra ${palabra} contiene ${contador} vocales.`);

    rl.close();
})
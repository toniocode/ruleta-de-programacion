// Determina si una cadena de texto es un pangrama 
// (contiene todas las letras del alfabeto al menos 
// una vez)

function esPangrama(texto) {
    texto = texto.toLowerCase().normalize("NFD").replace(/[\u0300-\u036f]/g, "");

    const letras = new Set();
    for (let letra of texto) {
        if (letra >= 'a' && letra <= 'z') {
            letras.add(letra);
        }
    }

    return letras.size === 26;
}

texto = "El veloz murciélago hindú comía feliz cardillo y kiwi. La cigüeña tocaba el saxofón detrás del palenque de paja.";

console.log(esPangrama(texto))
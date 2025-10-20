<?php
    // Pide una frase al usuario y determina si es 
    // un palíndromo
    
    echo "Introduce una frase: ";
    $frase = trim(fgets(STDIN));

    $frase = strtolower(str_replace(' ', '', $frase));
    $frase_al_reves = strrev($frase);

    if ($frase === $frase_al_reves) {
        echo "Es un palíndromo.";
    } else {
        echo "No es un palíndromo.";
    }
?>
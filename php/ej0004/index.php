<!-- 
    Escribe un programa que muestre cuántas veces aparece
    cada letra en una cadena de texto. 
-->

<?php 
    $texto = "Programar en PHP es divertido!";

    $texto = strtolower($texto);

    $contador = [];
    for ($i = 0; $i < strlen($texto); $i++) {
        $letra = $texto[$i];

        if (ctype_alpha($letra)) {
            if (isset($contador[$letra])) {
                $contador[$letra]++;
            } else {
                $contador[$letra] = 1;
            }
        }
    }

    echo "Frecuencia de letras:\n";
    foreach ($contador as $letra => $cantidad) {
        echo "$letra: $cantidad\n";
    }
?>
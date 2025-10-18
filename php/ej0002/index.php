<!-- 
    Crea una función que reciba una frase y devuelva 
    la palabra más larga dentro de ella. 
-->

<?php
    function palabraMasLarga($texto) {
        $texto = preg_replace("/[^\p{L}\s]/u", "", $texto);
        $texto = strtolower($texto);
        $palabras = explode(" ", $texto);
        $palabraMasLarga = "";
        foreach ($palabras as $palabra) {
            if (strlen($palabra) > strlen($palabraMasLarga)) {
                $palabraMasLarga = $palabra;
            }
        }
        return $palabraMasLarga;
    }

    $texto = "¿Qué le dice el perro al camaleón? Ladrillo.";
    echo "La palabra más larga es " . palabraMasLarga($texto);
?>
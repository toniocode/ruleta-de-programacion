<!-- Mostrar el mayor número de un array. -->

<?php
    $numeros = [3, 2, 84, 15, 6];
    $mayor = $numeros[0];
    
    foreach($numeros as $numero) {
        if ($numero > $mayor) {
            $mayor = $numero;
        }
    }

    echo "El número más grande es $mayor ";
?>

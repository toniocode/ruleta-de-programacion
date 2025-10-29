<?php 
    // Haz un programa que, dado un array de usuarios, 
    // cada uno con nombre y edad, permita ordenarlo
    // por cualquier propiedad

    function ordenarUsuarios($usuarios, $propiedad, $orden = "asc"): array {
        usort($usuarios, function($a, $b) use ($propiedad, $orden) {
            if (!isset($a[$propiedad]) || !isset($b[$propiedad])) return 0;

            if ($a[$propiedad] == $b[$propiedad]) return 0;

            if ($orden == "asc") {
                return ($a[$propiedad] < $b[$propiedad]) ? -1 : 1;
            } else {
                return ($a[$propiedad] > $b[$propiedad]) ? -1 : 1;
            }
        });

        return $usuarios;
    }

    $usuarios = [
        ["nombre" => "Ana", "edad" => 25],
        ["nombre" => "Luis", "edad" => 32],
        ["nombre" => "Marta", "edad" => 29]
    ];

    // Ordenamos desc por edad
    $usuariosOrdenados1 = ordenarUsuarios($usuarios, "edad", "desc");
    echo "Ordenado por edad (descendente):\n";
    foreach ($usuariosOrdenados1 as $usuario) {
        echo $usuario["nombre"] . " (" . $usuario["edad"] . " años)\n";
    }

    // Ordenamos asc por nombre
    $usuariosOrdenados2 = ordenarUsuarios($usuarios, "nombre", "asc");
    echo "\nOrdenado por nombre (ascendente):\n";
    foreach ($usuariosOrdenados2 as $usuario) {
        echo $usuario["nombre"] . " (" . $usuario["edad"] . " años)\n";
    }
?>
// Crea un programa que permita al usuario jugar una 
// partida de Piedra, Papel o Tijera contra la 
// máquina.

package _java.ej0003;

import java.util.Map;
import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String[] opciones = {"piedra", "papel", "tijera"};

        Map<String, String> reglas = Map.of(
            "piedra", "tijera",
            "papel", "piedra",
            "tijera", "papel"
        );

        Scanner scanner = new Scanner(System.in);
        System.out.print("Opción (piedra, papel, tijera): ");
        String opcionUsuario = scanner.nextLine();

        if (!reglas.keySet().contains(opcionUsuario)) {
            System.out.println("Opción no válida.");
            return;
        }

        Random random = new Random();
        String opcionMaquina = opciones[random.nextInt(opciones.length)];
        System.out.println("Opción máquina: " + opcionMaquina);

        if (opcionUsuario.equals(opcionMaquina)) {
            System.out.println("Empate!");
        } else if (reglas.get(opcionUsuario).equals(opcionMaquina)) {
            System.out.println("Has ganado.");
        } else {
            System.out.println("Has perdido.");
        }

        scanner.close();
    } 
}

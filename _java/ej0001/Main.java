// Pedir una palabra y mostrarla al revés.

package _java.ej0001;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Introduce una palabra: ");
        String palabra = sc.nextLine();

        String palabraInvertida = "";

        for (int i = palabra.length() - 1; i >= 0; i--) {
            palabraInvertida += palabra.charAt(i);
        }

        System.out.println("Palabra invertida: " + palabraInvertida);

        sc.close();
    }
}

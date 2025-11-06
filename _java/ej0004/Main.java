// Comprimir una cadena de texto de la siguiente forma:
// aabbaaac -> a2b2a3c1

package _java.ej0004;

public class Main {
    public static String comprimirTexto(String cadena) {
        String resultado = "";
        int contador = 1;

        for (int i = 0; i < cadena.length(); i++) {
            if (i < cadena.length() - 1 && cadena.charAt(i) == cadena.charAt(i + 1)) {
                contador++;
            } else {
                resultado += cadena.charAt(i) + String.valueOf(contador);
                contador = 1;
            }
        }

        return resultado;
    }

    public static void main(String[] args) {
        String cad1 = "aaabbbaabbcc";
        String cad2 = "aaabbbbcc";

        System.out.println("Cadena 1: " + comprimirTexto(cad1));
        System.out.println("Cadena 2: " + comprimirTexto(cad2));
    }
}

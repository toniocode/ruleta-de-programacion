// Muestra un reloj digital en la consola

package _java.ej0002;

import java.io.IOException;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

public class Main {
    public static void main(String[] args) throws InterruptedException, IOException {
        DateTimeFormatter formato = DateTimeFormatter.ofPattern("HH:mm:ss");

        while (true) {
            // Limpiar consola en MacOS y Linux
            new ProcessBuilder("clear").inheritIO().start().waitFor();

            // Limpiar consola en Windows
            // new ProcessBuilder("cls").inheritIO().start().waitFor();

            LocalTime horaActual = LocalTime.now();
            System.out.print(horaActual.format(formato));
            Thread.sleep(1000);
        }
    }
}

// Muestra un reloj digital en la consola

package _java.ej0002;

import java.io.IOException;

public class Main {
    public static void main(String[] args) throws InterruptedException, IOException {
        for (int hora = 0; hora < 24; hora++) {
            for (int minuto = 0; minuto < 60; minuto++) {
                for (int segundo = 0; segundo < 60; segundo++) {
                    // En MacOS y Linux
                    new ProcessBuilder("clear").inheritIO().start().waitFor();
                    
                    // En Windows
                    // new ProcessBuilder("cls").inheritIO().start().waitFor();
                    
                    System.out.printf("%02d:%02d:%02d", hora, minuto, segundo);
                    Thread.sleep(1000);
                }
            }
        }
    }
}

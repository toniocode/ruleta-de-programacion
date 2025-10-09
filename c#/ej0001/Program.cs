// El programa elige un número aleatorio entre 1 y 100, y el 
// usuario debe adivinarlo. Después de cada intento, el 
// programa indica si el número es mayor o menor que el 
// secreto.

using System;

class Program {
    static void Main() {
        Random random = new Random();
        int secreto = random.Next(1, 101);
        int intento = 0;
        int contador = 0;

        do {
            Console.Write("Introduce un número: ");
            intento = Convert.ToInt32(Console.ReadLine());

            if (intento < secreto) {
                Console.WriteLine("El número secreto es MAYOR.");
            } else if (intento > secreto) {
                Console.WriteLine("El número secreto es MENOR");
            }

            contador++;
        } while (intento != secreto);

        Console.WriteLine($"Correcto! Has adivinado el número secreto en {contador} intentos.");
    }
}
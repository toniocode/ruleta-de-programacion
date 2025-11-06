// Obtener la suma de los elementos de un array

using System;

class Program {
    static int ObtenerSumaArrF1(int[] arr)
    {
        int suma = 0;

        foreach (int n in arr)
        {
            suma += n;
        }

        return suma;
    }

    static int ObtenerSumaArrF2(int[] arr)
    {
        return arr.Sum();
    }

    static void Main() {
        int[] arr = [3, 7, 2, 8, 5];

        Console.WriteLine("FORMA 1 | La suma de los elementos es: " + ObtenerSumaArrF1(arr));
        Console.WriteLine("FORMA 2 | La suma de los elementos es: " + ObtenerSumaArrF2(arr));
    }
}

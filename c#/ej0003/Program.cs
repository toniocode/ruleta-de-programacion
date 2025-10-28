// Determina si en una lista de números existe un número 
// dominante, es decir, un número que aparece más veces 
// que la mitad del tamaño total de la lista.

using System;

class Program
{
    static void Main()
    {
        int[] arr1 = [3, 3, 4, 2, 3, 3, 5];
        int[] arr2 = [1, 2, 3, 3];

        HasDominantNumber(arr1);
        HasDominantNumber(arr2);
    }
    
    static void HasDominantNumber(int[] arr)
    {
        Dictionary<int, int> counter = [];
        foreach (int n in arr)
        {
            counter[n] = counter.TryGetValue(n, out int value)
                ? ++value
                : 1;

            if (counter[n] > arr.Length / 2)
            {
                Console.WriteLine($"El número dominante es {n}.");
                return;
            }
        }

        Console.WriteLine("El array no tiene número dominante.");
    }
}

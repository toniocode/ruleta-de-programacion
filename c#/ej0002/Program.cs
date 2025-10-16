// Dada una lista de nombres, obtén otra con los nombres
// que comienzan por una letra pedida.

class Program {
    static void Main()
    {
        List<string> nombres = new List<string>
        {
            "Ana", "Carlos", "Pablo", "Beatriz",
            "Andrés", "Pedro"
        };

        Console.Write("Introduce una letra: ");
        string letra = Console.ReadLine()!;

        List<string> resultado = nombres
            .Select(n => n.ToLower())
            .Where(n => n.StartsWith(letra))
            .Select(n => char.ToUpper(n[0]) + n.Substring(1))
            .OrderBy(n => n)
            .ToList();

        Console.WriteLine($"Nombres que empiezan por {letra}:");
        foreach (var nombre in resultado) {
            Console.WriteLine(nombre);
        }
    }
}
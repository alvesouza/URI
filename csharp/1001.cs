using System;

class URI{
    static void Main(string[] args){
        int soma;
        {
            soma = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());
            soma += b;
        }
        Console.WriteLine("X = {0}", soma);
    }
}
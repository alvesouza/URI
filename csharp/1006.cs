using System;

class URI{
    static void Main(){
        double media;
        
        media = 2*Convert.ToDouble(Console.ReadLine());
        media += 3*Convert.ToDouble(Console.ReadLine());
        media += 5*Convert.ToDouble(Console.ReadLine());
        media /= 10;
        
        Console.WriteLine("MEDIA = {0:0.0}", media);
    }
}
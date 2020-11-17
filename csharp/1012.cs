using System;


static class Constants{
    public const double PI = 3.14159;
}
abstract class Polygon{
    
    public abstract double Area();
}

class Circle:Polygon
{
    public double radius;
    public Circle(double r){
        radius = r;
    }

    override public double Area(){
        return Constants.PI*radius*radius;
    }
}

class Triangle:Polygon{
    private double height, base_triangle;
    public Triangle(double h, double b){
        height = h;
        base_triangle = b;
    }
    public override double Area(){
        return height*base_triangle/2;
    }
}

class Rectangle:Polygon{
    protected double B;
    private double A;
    public Rectangle(double a, double b){
        A = a;
        B = b;
    }

    public override double Area(){
        return A*B;
    }
}

class Square:Rectangle{
    public Square(double b):base(b,b){}

    public override double Area(){
        return B*B;
    }
}

class Trapeze:Square{
    private double A, C;

    public Trapeze(double a, double b, double c):base(b){
        A = a;
        C = c;
    }

    public override double Area(){
        return (A+B)*C/2;
    }
}

class URI{
    static void Main(){
        Circle circle;
        Triangle triangle;
        Trapeze trapeze;
        Square square;
        Rectangle rectangle;
        {
            string input = Console.ReadLine();
            string[] array = input.Split(' ');
            double a = Convert.ToDouble(array[0]);
            double b = Convert.ToDouble(array[1]);
            double c = Convert.ToDouble(array[2]);
            circle = new Circle(c);
            triangle = new Triangle(c, a);
            trapeze = new Trapeze(a, b, c);
            square = new Square(b);
            rectangle = new Rectangle(a, b);

        }
        Console.WriteLine("TRIANGULO: {0:0.000}", triangle.Area());
        Console.WriteLine("CIRCULO: {0:0.000}", circle.Area());
        Console.WriteLine("TRAPEZIO: {0:0.000}", trapeze.Area());
        Console.WriteLine("QUADRADO: {0:0.000}", square.Area());
        Console.WriteLine("RETANGULO: {0:0.000}", rectangle.Area());
    }
}
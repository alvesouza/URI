#include<stdio.h>
using namespace std;
const double PI = 3.14159;
// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a trapezoid
double calculateTrapezoidArea(double base1, double base2, double height) {
    return 0.5 * (base1 + base2) * height;
}

int main() {
    double a, b, c;
    scanf( "%lf %lf %lf", &a, &b, &c );

    printf( "TRIANGULO: %.3lf\n", calculateTriangleArea(a, c) );
    printf( "CIRCULO: %.3lf\n", calculateCircleArea(c) );
    printf( "TRAPEZIO: %.3lf\n", calculateTrapezoidArea( a, b, c) );
    printf( "QUADRADO: %.3lf\n", calculateSquareArea( b ) );
    printf( "RETANGULO: %.3lf\n", calculateRectangleArea( a, b ) );
    return 0;
}
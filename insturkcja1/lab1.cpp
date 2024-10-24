#include <math.h>
#include <iostream>
struct Wektor2D
{
    int x;
    int y;
    
    double norm()
    {
        double norma = sqrt(x*x+y*y);
        return norma;
    }

    void print()
    {
        std::cout << "wspolrzedna x: " << x << std::endl << "wspolrzedna y: " << y;
    }
};

int main()
{
    Wektor2D wektor_a;
    wektor_a.x = 3;
    wektor_a.y = 4;
    // std::cout<<"iksowa" + wektor_a.x;
    wektor_a.print();
}

#include <iostream>

using namespace std;

class Complex
{
    int real, img;
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    
    Complex operator + (Complex object)
    {
        Complex temp;
        temp.real = real + object.real;
        temp.img = img + object.img;
        return temp;
    }

    void display()
    {
        cout << real << " + " << img << "j" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(4, -3);
    Complex c3(0, 6);
    Complex c4 = c1 + c2 + c3;
    c4.display();
}
#include <iostream>
#include <string>

using namespace std;

class circle
{
private: 
    int radius; 
    float area;
public:
    void setR(int r)
    {
        radius = r;
    }
    int getR()
    {
        return radius;
    }

    void setArea(float r)
    {
        area = 3.1416 * r * r;
    }
    float getArea()
    {
        return area;
    }

    void getInfo()
    {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
    }
};

int main()
{
    circle c1, c2, c3;
    c1.setR(4);
    c2.setR(5);
    c3.setR(6);
    c1.setArea(4);
    c2.setArea(5);
    c3.setArea(6);
    c1.getInfo();
    c2.getInfo();
    c3.getInfo();

    cout << "Total area: " << c1.getArea() + c2.getArea() + c3.getArea() << endl;
}
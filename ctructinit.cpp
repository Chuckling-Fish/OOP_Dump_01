#include <iostream>

using namespace std;

class A
{
private:
    int ax;
public:
    int sum = 0;
    A(int a)
    {
        ax = a;
    }
    int getAx()
    {
        return ax;
    }
    ~A()
    {}
};

class B : public A
{
    int bx;
public:
    B(int a, int b) : A(a)
    {
        bx = b;
        
    }
    int getBx()
    {
        return bx;
    }
    ~B()
    {}
};

class C : public B
{
    int cx;
public:
    C(int a, int b, int c) : B(a, b)
    {
        cx = c;
    }
    int getSum()
    {
        sum = getAx() + getBx() + cx;
        return sum;
    }
    ~C()
    {}
};

int main()
{
    C lk1(3, 4, 5);
    C lk2(6, 7, 8);
    cout << lk1.getSum() << " " << lk2.getSum() << endl;
}
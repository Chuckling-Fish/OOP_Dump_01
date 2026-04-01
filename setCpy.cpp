#include <iostream>

using namespace std;

class A
{
    int a, b;
    int *value1, *value2;
public:
    A()
    {}

    void SetData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    A(const A &obj)
    {
        a = obj.a;
        b = obj.b;
    }

    void prin()
    {
        cout << a << " " << b << endl;
    }
    ~A(){}
};

int main()
{
    A ob1, ob2;
    ob1.SetData(6, 7);
    ob2 = ob1;
    ob1.prin();
    ob2.prin();
}
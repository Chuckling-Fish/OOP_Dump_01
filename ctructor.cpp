#include <iostream>

using namespace std;

int z = 0;
class Test
{
    int x, y;
    int *value1;
    int *value2;
public:
    Test()
    {
        z++;
    }
    Test(int a, int b)
    {
        z++;
        x = a;
        y = b;
        value1 = &x;
        value2 = &y;
    }
    Test(const Test &obj)
    {
        value1 = new int;
        value2 = new int;
        *value1 = *obj.value1;
        *value2 = *obj.value2;
    }
    void prin()
    {
        cout << "x & y & z: " << x << " " << y << " " << z << endl;
    }
};

int main()
{
    Test ob1(7, 8);  
    ob1.prin();
    Test ob2(9, 10);
    ob2.prin();
    Test ob3;
    ob3 = ob2;
    ob3.prin();
}

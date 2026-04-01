#include <iostream>
#include <string>

using namespace std;

class Person {
    int roll;
    string name;
    string dept;
    float cgpa;

public:
    Person(int roll, string name, string dept, float cgpa)
    {
        this->roll = roll;
        this->name = name;
        this->dept = dept;
        this->cgpa = cgpa;
    }

    void getInfo()
    {
        cout << name << endl;
        cout << roll << endl;
        cout << dept << endl;
        cout << cgpa << endl;
    }
};

int main()
{
    Person guy1(2403178, "Anjum", "CSE", 3.54), guy2(2403179, "Numan", "CSE", 3.74), guy3(2403180, "Mahdi", "ECE", 3.91);
    guy1.getInfo();
    guy2.getInfo();
    guy3.getInfo();
}


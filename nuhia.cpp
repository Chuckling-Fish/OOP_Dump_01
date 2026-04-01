#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    int roll;
    int phone;
public:
    int age;
    string name;
    string dept;
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << dept << endl;
        cout << "Roll: " << roll << endl;
        cout << "Phone: " << phone << endl;
    }
    
    void setRoll(int r)
    {
        roll = r;
    }
    void setPhone(int p)
    {
        phone = p;
    }
    
    int getRoll()
    {
        return roll;
    }
    int getPhone()
    {
        return phone;
    }
};



int main()
{
    Person Anjum;
    Anjum.name = "Anupam Anjum Shahitya";
    Anjum.age = 21;
    Anjum.dept = "CSE";
    Anjum.setRoll(2403178);
    Anjum.setPhone(017332);
    Anjum.getInfo();
}
#include <iostream>

using namespace std;

class Account 
{
    int number; 
    int amount = 0; 

public: 
    void setNum(int n)
    {
        number = n;
    }

    int getNum()
    {
        return number;
    }

    void deposit(int dep)
    {
        amount = amount + dep;
    }
    
    void withdraw(int wit)
    {
        amount = amount - wit;
    }

    int getAm()
    {
        return amount;
    }

    void getInfo()
    {
        cout << "Acc number: " << number << endl;
        cout << "Acc balance: " << amount << endl;
    }
};

void transfer(int giver, int taker, int money)
{
    
}

int main()
{
    Account a1, a2, a3, a4, a5;
    a1.setNum(1001);
    a2.setNum(1002);
    a3.setNum(1003);
    a4.setNum(1004);
    a5.setNum(1005);

    a1.deposit(600);
    a2.deposit(8000);
    a3.deposit(89);
    a4.deposit(69);
    a5.deposit(444);


    a1.getInfo();
    a2.getInfo();
    a3.getInfo();
    a4.getInfo();
    a5.getInfo();
}
#include <iostream>
using namespace std;

class Bank
{
    char name[40];
    char accntType[20];
    int num;
    int balance;

public:
    void value()
    {
        cout << "Enter the name of Depositer=";
        cin >> name;
        cout << "Enter the account type=";
        cin >> accntType;
        cout << "Enter the account number=";
        cin >> num;
        cout << "Enter the balance=";
        cin >> balance;
    }

    void deposit()
    {
        int bal;
        cout << "Enter the amount to deposit=";
        cin >> bal;
        balance = balance + bal;
    }

    void withdraw()
    {
        int cash;
        cout << "Enter the amount to withdraw=";
        cin >> cash;
        if (balance >= cash)
            balance = balance - cash;
        else
            cout << "NO FUND:";
    }

    void display()
    {
        cout << "Depositer Name=" << name << endl;
        cout << "Balance amount=" << balance << endl;
    }
};

int main()
{
    Bank b1;
    b1.value();
    cout << endl;
    b1.deposit();
    cout << endl;
    b1.withdraw();
    cout << endl;
    b1.display();
    return 0;
}
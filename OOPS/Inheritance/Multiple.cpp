#include <iostream>
using namespace std;

class Person
{
    string name;

public:
    void setName(string n)
    {
        name = n;
    }
    void showName()
    {
        cout << "Name: " << name << endl;
    }
};

class Employee
{
    int emp_id;

public:
    void setEmpId(int id)
    {
        emp_id = id;
    }

    void showEmpId()
    {
        cout << "Employee ID: " << emp_id << endl;
    }
};

class Manager : public Person, public Employee
{
public:
    void displayInfo()
    {
        showName();
        showEmpId();
    }
};

int main()
{
    Manager mgr;
    mgr.setName("Moksh");
    mgr.setEmpId(2408);

    cout << "==== Manager Info ====" << endl;

    mgr.displayInfo();

    return 0;
}
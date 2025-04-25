#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    int grid;
    char name[50];
    int age;
    char course[50];
    static char college[50];

public:
    void setData()
    {
        cout << "Enter the Student grid: ";
        cin >> this->grid;
        cout << "Enter the Student name: ";
        cin >> this->name;
        cout << "Enter the Student age: ";
        cin >> this->age;
        cout << "Enter Course: ";
        cin >> this->course;
    }

    void getData()
    {
        cout << "Student grid: " << this->grid
             << ", Student Name: " << this->name
             << ", Student Color: " << this->age
             << ", Student Course: " << this->course
             << ", Student College: " << this->college << endl;
    }

    static void changeData()
    {
        strcpy(Student::college, "J. P. Dawar");
    }
};

char Student::college[50] = "Vidhyadeep";

int main()
{
    int n;

    cout << "Enter how many Student details you want to add: ";
    cin >> n;
    Student student[n];

    for (int i = 0; i < n; i++)
    {
        student[i].setData();
    }

    Student::changeData();

    for (int i = 0; i < n; i++)
    {
        student[i].getData();
    }
}
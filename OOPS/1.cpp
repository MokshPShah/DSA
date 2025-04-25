#include <iostream>
#include <string.h>
using namespace std;

class Car
{
    char brand[50];
    char model[50];
    char color[50];
    int year;

public:
    void setData()
    {
        cout << "Enter the Car Brand name: ";
        cin >> this->brand;
        cout << "Enter the Car Model name: ";
        cin >> this->model;
        cout << "Enter the Car Color: ";
        cin >> this->color;
        cout << "Enter Year: ";
        cin >> this->year;
    }

    void getData()
    {
        cout << "Car Brand: " << this->brand
             << ", Car Model: " << this->model
             << ", Car Color: " << this->color
             << ", Car Year: " << this->year << endl;
    }
};

int main()
{
    int n;

    cout << "Enter how many car details you want to add: ";
    cin >> n;
    Car cars[n];

    for (int i = 0; i < n; i++)
    {
        cars[i].setData();
    }

    for (int i = 0; i < n; i++)
    {
        cars[i].getData();
    }
}
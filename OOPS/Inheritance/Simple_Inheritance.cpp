#include <iostream>
#include <string.h>
using namespace std;

class City
{
    char name[50];
    int year;

public:
    void setData(char name[50], int year)
    {
        strcpy(this->name, name);
        this->year = year;
    }

    void displayCity()
    {
        cout << "City Name: " << this->name << endl
             << "Founded Year: " << this->year << endl;
    }
};
class MetroCity : public City
{
    int population;

public:
    void setData(char name[50], int year, int population)
    {
        City::setData(name, year);
        this->population = population;
    }

    void displayMetro()
    {
        displayCity();
        cout << "Population: " << this->population << endl;
    }
};

int main()
{

    MetroCity metro;
    char name[50];
    int year, population;

    cout << "Enter the name of the city: ";
    cin >> name;
    cout << "Enter the Founded Year: ";
    cin >> year;
    cout << "Enter the Population of the city: ";
    cin >> population;

    metro.setData(name, year, population);
    metro.displayMetro();

    return 0;
}
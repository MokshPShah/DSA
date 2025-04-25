#include <iostream>
#include <string.h>
using namespace std;

class City
{
    char name[50];
    int year;

public:
    // Default Constructor
    City()
    {
        cout << "                    Welcome to the City Data Collection";
        cout << endl
             << "                ===========================================" << endl
             << endl;
    }

    // Parameterized Constructor
    City(char name[50], int year)
    {
        strcpy(this->name, name);
        this->year = year;
    }

    void getData()
    {
        cout << "City Name: " << this->name << endl
             << "City Year: " << this->year << endl;
    }

    ~City(){
        cout << "Thank you Visit Again..." << endl;
    }
};

int main()
{
    City c1;

    char name[50];
    int year;
    cout << "Enter the name of city: ";
    cin >> name;
    cout << "Enter the year in which city is formed: ";
    cin >> year;

    City c2(name, year);
    cout << endl
         << "                ===========================================" << endl
         << endl;
    c2.getData();
    return 0;
}

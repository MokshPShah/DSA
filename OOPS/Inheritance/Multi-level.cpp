#include <iostream>
#include <string.h>
using namespace std;

class Animal
{
public:
    void displayMain()
    {
        cout << "Category: Animal" << endl;
    }
};
class Mammal : public Animal
{
public:
    void displayMamal()
    {
        displayMain();
        cout << "This type of animals are found on land." << endl;
    }
};

class Lion : public Mammal
{
public:
    void displayLion(){
        displayMamal();
        cout << "Lion is the King of the Jungle." << endl;
    }
};

int main()
{
    Lion lion;

    lion.displayLion();

    return 0;
}
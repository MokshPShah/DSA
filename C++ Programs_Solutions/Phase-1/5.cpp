// 5. Two college collegues had argue with a ASCII value conversion method. Write a C++ Program which provides a solution for their issue.

#include <iostream>
using namespace std;

void showMenu()
{
    cout << "------ ASCII CONVERSION UTILITY ------" << endl
         << "1. Convert Character to ASCII" << endl
         << "2. Convert ASCII to Character" << endl
         << "0. Exit" << endl
         << "Enter your choice: ";
}

int main()
{

    int asciValue, choice;
    char ch;

    while (true)
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the Charcter: ";
            cin >> ch;
            cout << "ASCII value of: " << ch << " is: " << int(ch) << endl;
            break;
        case 2:
            cout << "Enter ASCII Value(0-127): ";
            cin >> asciValue;
            if (asciValue >= 0 && asciValue <= 127)
            {
                cout << "Character for ASCII value " << asciValue << " is '" << char(asciValue) << endl;
            }
            else
            {
                cout << "Enter the Valid ASCII Value..." << endl;
            }
            break;

        case 0:
            cout << "Exiting program. Have a great day ahead!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please select a valid option." <<  endl;
        }
    }

    return 0;
}
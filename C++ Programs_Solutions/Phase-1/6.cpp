// 6. An IT company wants to generate random number of 6 digits long and send it to its employees. Write a C++ Program to help this IT company.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int random = 100000 + rand() % 900000;

    cout << "Random 6 digit number is: " << random << endl;
}
// 4. Two classmates wants to exchange their seating with each other. But the problem is that there are only two chairs in the small classroom which already aquires by them. Write a C++ Program which provides a solution for this particular problem.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string seat_1, seat_2, temp;

    cout << "Enter the student name in seat 1: ";
    cin >> seat_1;
    cout << "Enter the student name in seat 2: ";
    cin >> seat_2;

    cout << "====== Student's seat before seat swaping ======" << endl;
    cout << "Seat 1: " << seat_1 << endl;
    cout << "Seat 2: " << seat_2 << endl;

    temp = seat_1;
    seat_1 = seat_2;
    seat_2 = temp;

    cout << "====== Student's seat before seat swaping ======" << endl;
    cout << "Seat 1: " << seat_1 << endl;
    cout << "Seat 2: " << seat_2 << endl;

    return 0;
}
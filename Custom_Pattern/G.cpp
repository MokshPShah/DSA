#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        string vaule = (i == 1 || i == 5) ? "* * * * *" : 
                       (i == 4) ? "*\t*" :
                       (i == 3) ? "*   * * *" : "*";
        cout << vaule << endl;
    }
}
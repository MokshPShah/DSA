#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        string value = (i == 1) ? "  * * * * *" :(i == 2 || i == 3) ? "       *" :(i == 4) ? "*      *" :(i == 5) ? " * * * *": "";
        cout << value << endl;
    }
    return 0;
}

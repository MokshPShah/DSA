#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++)
    {
        string value = (i==2)?"* *   * *" : (i==3)?"*  * *  *": "*\t*";
        cout << value << endl;
    }
    
}
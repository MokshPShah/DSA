#include <iostream>
#include <string.h>
using namespace std;

class Movies
{
    string award;
};
class Bollywood : public Movies
{

public:
    void displayAward(string award)
    {
        cout << "Bollywood Award: " << award << endl;
    }
};
class Hollywood : public Movies
{
public:
    void displayAward(string award)
    {
        cout << "Hollywood Award: " << award << endl;
    }
};
class Gujarati : public Movies
{
public:
    void displayAward(string award)
    {
        cout << "Gujarati Cinema Award: " << award << endl;
    }
};

int main()
{
    Bollywood b;
    Hollywood h;
    Gujarati g;

    b.displayAward("IFFA Award");
    h.displayAward("OSCAR");
    g.displayAward("GIFA Award");
}
#include <iostream>

using namespace std;

int godzina=0; int populacja=1;

int main()
{
    do {
        godzina++;
        populacja = populacja*2;
    } while(populacja<=1000000000);
    cout << godzina << " godzin";
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;
int liczba; int strzal; int proby;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe 1...100"<< endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    cout<<liczba<< endl;

    while(strzal!=liczba)
    {
        proby++;
        cout<<"Zgadnij jaka (to Twoja "<<proby<<" proba):";
        cin>>strzal;

        if(strzal==liczba) {
            cout<<"Udalo sie! Wygrywasz w "<<proby<<" probie"<<endl;
        } else if(strzal<liczba) {
            cout<<"To za malo"<<endl;
        } else if(strzal>liczba) {
            cout<<"To za duzo"<<endl;
        }


    }

    system("pause");
        return 0;
}

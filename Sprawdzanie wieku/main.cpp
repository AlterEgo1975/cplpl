#include <iostream>

using namespace std;
int wiek;

int main()
{
    cout << "Ile masz lat: " ;
    cin >> wiek;
    if (wiek>=35){
        cout<<"Mozesz zostac prezydentem";
    } else if (wiek>=18) {
        cout<<"Jestes pelnoletni";
    } else {
        cout<<"Jestes niepelnoletni";
    }

    return 0;
}

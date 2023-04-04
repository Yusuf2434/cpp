#include<iostream>
using namespace std;
main(){
int sayi;

    cout<< "Bir sayi giriniz: ";
    cin>>sayi;

    if (sayi < 0)
    {
        cout<<"Girdiginiz sayi negatif "<<endl;
    }else
    {
        cout<<"Girdiginiz sayi pozitif "<<endl;
    }

return 0;
}

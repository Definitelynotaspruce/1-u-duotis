#include <iostream>
#include <string>

using namespace std;

void plotis ( int sk, string t);

int main()
{
    string vardas;
    int sk, papildomas;

    cout<<"Iveskite savo varda:"<<endl;
    cin>>vardas;
    cout<<"Iveskite norima eiluciu skaiciu :"<<endl;
    cin>>sk;
    papildomas = (sk - 3) / 2;

    string tekstukas = " Sveika, " + vardas + "! ";
    if (vardas.back() == 's')
    tekstukas = " Sveikas, " + vardas + "! ";
        
    string tarpukas(tekstukas.size(), ' ');
       
    string zvaigzdutes(tekstukas.size()+2, '*');

    cout<<zvaigzdutes<<endl;
    plotis(papildomas, tekstukas);
    cout<<"*"<<tekstukas<<"*"<<endl;
    plotis(papildomas, tekstukas);
    cout<<zvaigzdutes<<endl;

    return 0;
}

void plotis ( int sk, string t)
{
    for (int i=0; i<sk; i++){
        cout <<  "* " << string(t.size()-2, ' ') << " *" << endl;
    }
}
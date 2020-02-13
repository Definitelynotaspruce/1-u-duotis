#include <iostream>
#include <string>

using namespace std;

int main()
{
    string vardas;
    cout<<"Iveskite savo varda:"<<endl;
    cin>>vardas;
    string tekstukas = " Sveikas, " + vardas + "! ";
    string tarpukas(tekstukas.size(), ' ');
    string zvaigzdutes(tekstukas.size()+2, '*');

    cout<<zvaigzdutes<<endl;
    cout<<"*"<<tarpukas<<"*"<<endl;
    cout<<"*"<<tekstukas<<"*"<<endl;
    cout<<"*"<<tarpukas<<"*"<<endl;
    cout<<zvaigzdutes<<endl;
    
    return 0;
}

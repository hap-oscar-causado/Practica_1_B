#include <iostream>
using namespace std;

int main()
{
    int mes;
    cout<<"Ingresa el mes: ";
    cin>>mes;
    int dia;
    cout<<"Ingresa el dia: ";
    cin>>dia;

    if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
        if (dia > 0 && dia <= 31){
            cout<<mes<<"/"<<dia<<" es una fecha valida"<<endl;
        }
        else {
            cout<<mes<<"/"<<dia<<" es una fecha invalida"<<endl;
        }
    }
    else if (mes == 2) {
        if (dia > 0 && dia <= 28){
            cout<<mes<<"/"<<dia<<" es una fecha valida"<<endl;
        }
        else if (dia == 29){
            cout<<mes<<"/"<<dia<<" es valida en bisiesto"<<endl;
        }
        else {
            cout<<mes<<"/"<<dia<<" es una fecha invalida"<<endl;
        }
    }
    else if (mes==4||mes==6||mes==9||mes==11){
        if (dia > 0 && dia <= 30){
            cout<<mes<<"/"<<dia<<" es una fecha valida"<<endl;
        }
        else {
            cout<<mes<<"/"<<dia<<" es una fecha invalida"<<endl;
        }
    }


    return 0;
}

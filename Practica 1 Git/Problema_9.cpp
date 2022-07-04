#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout<<"Ingresa un numero: ";
    cin>>num;
    int cifra=0;
    int sum = 0;

    while(num>0){

        cifra=num%10;
        sum+=pow(cifra,cifra);

        num = num/10;
    }
    cout<<"El resultado de la suma es: "<<sum<<endl;

    return 0;
}

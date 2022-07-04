#include <iostream>
using namespace std;


int num_div(int num){
    int yamequieroir = 0;
    for (int i=1;i<=num;i++){
        if (num%i==0){
            yamequieroir +=1;
        }
    }
    return yamequieroir;
}

int main()
{

    int k;
    cout<<"Ingresa un numero: ";
    cin>>k;

    int contadorsexi=1;
    int num;

    while(true){
        num = contadorsexi*(contadorsexi+1)/2;
        if (num_div(num)>k){
            cout<<"El numero es: "<<num<<" que tiene "<<num_div(num)<<" divisores."<<endl;
            break;
        }
        contadorsexi+=1;

    }

    return 0;
}

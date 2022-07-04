#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Ingresa un numero: ";
    cin>>num;

    int pool = 2;
    bool conf;

    while(true){
        for (int i=2; i<=num; i++)
            if (pool%i==0){
                conf = true;
            }
            else {
                conf = false;
                break;
            }
        if (conf == true){
            cout<<"El minimo comun multiplo es: "<<pool<<endl;
            break;
        }
        else {
            pool+=1;
        }
    }

    return 0;
}

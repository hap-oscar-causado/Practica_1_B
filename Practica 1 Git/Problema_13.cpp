#include <iostream>
using namespace std;

int main()
{

    int num;
    cout<<"Ingresa un numero: ";
    cin>>num;

    int sum_prim = 0;

    for (int pool = 2; pool < num; pool++){
        for (int var = 2; var <= pool; var++){
            if (pool%var == 0){
                if (pool == var){
                    sum_prim += pool;
                }
                else {
                    break;
                }
            }
        }
    }
    cout<<"El resultado de la suma es: "<<sum_prim<<endl;

    return 0;
}

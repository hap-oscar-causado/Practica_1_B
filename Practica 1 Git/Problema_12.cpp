#include <iostream>
using namespace std;

int main()
{

    int num;
    cout<<"Ingresa un numero: ";
    cin >> num;

    int mf_prim = 1;
    bool es_primo = false;

    for (int val_i = 2; val_i<=num; val_i++){
        if (num%val_i == 0){
            for (int i=2; i<=val_i; i++){
                if (val_i%i == 0){
                    if (val_i == i){
                        es_primo = true;
                    }
                    else{
                        es_primo = false;
                    break;
                    }
                }
                else{
                    es_primo = false;
                }
            }
        }
        else {
            es_primo = false;
        }

        if (es_primo == true){
            mf_prim = val_i;
        }

    }
    cout<< "El mayor factor primo de "<<num<<" es: "<<mf_prim<<endl;

    return 0;
}

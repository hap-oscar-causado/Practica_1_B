#include <iostream>
using namespace std;

int main()
{
    int k;
    cout<<"Ingresa un numero: ";
    cin>>k;

    int c_seed;
    int cop_c_seed = 0;
    int cop_pool, cop_pool2;

    for (int pool = 1; pool<k;pool++){
        c_seed = 0;
        cop_pool = pool;

        cout<<"Semilla "<<pool<<": | ";

        while (true) {
            if (cop_pool==1){
                cout<<cop_pool<<" | ";
                cout<<endl;
                cout<<endl;

                c_seed +=1;
                if (c_seed>cop_c_seed){
                    cop_c_seed = c_seed;
                    cop_pool2 = pool;
                    break;
                }
                else {
                    break;
                }
            }

            else if (cop_pool%2 == 0){
                cout<<cop_pool<<" | ";

                cop_pool = cop_pool/2;
                c_seed +=1;
            }
            else {
                cout<<cop_pool<<" | ";

                cop_pool = cop_pool*3+1;
                c_seed +=1;
            }
        }
    }

    cout<<"La serie mas larga es con la semilla "<<cop_pool2<<", teniendo "<<cop_c_seed<<" terminos."<<endl;

    return 0;
}

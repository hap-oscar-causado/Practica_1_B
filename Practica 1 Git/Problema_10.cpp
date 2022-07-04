#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Ingresa un numero: ";
    cin>>num;

    int con = 1;
    bool c_pro = false;
    int prim = 0;

    while (true) {
        for (int i=2;i<=con;i++){
            if (con%i==0){
                if (con == i){
                    c_pro = true;
                }
                else {
                    c_pro = false;
                    break;
                }
            }
        }
        if (c_pro == true){
            prim +=1;
        }
        if (prim==num){
            break;
        }
        con+=1;
    }

    cout<<"El primo numero "<<num<<" es: "<<con<<endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ingresa el numero de elementos: ";
    cin>>n;
    float e = 0;

    for (int i = 0; i <= n-1; i+=1){
        float p = 1;
        for (int var = 1; var <= i-1; var+=1){
            p += var*p;
        }
        e += 1/p;
    }
    cout<<"e es aproximadamente: "<<e<<endl;

    return 0;
}

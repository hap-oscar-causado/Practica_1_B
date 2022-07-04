#include <iostream>
using namespace std;

int main()
{
    int fib,num,s1,s2,sum;
    sum = 0;
    fib = 0;
    s1 = 1;
    s2 = 0;

    cout<<"Ingresa el numero: ";
    cin>>num;

    while (true){
        fib = s1+s2;
        if (fib%2 == 0){
            if (fib < num){
                sum += fib;
            }
            else {
                break;
            }
        }
        s2 = s1;
        s1 = fib;
    }

    cout<<"El resultado de la suma es: "<<sum<<endl;

    return 0;
}

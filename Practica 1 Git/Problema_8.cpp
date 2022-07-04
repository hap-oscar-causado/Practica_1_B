#include <iostream>
using namespace std;

int main()
{
    int a,b,c,sum=0;
    cout<<"Ingresa a: ";
    cin>>a;
    cout<<"Ingresa b: ";
    cin>>b;
    cout<<"Ingresa c: ";
    cin>>c;

    for (int i=1;i<=c;i++){
        if (a*i < c){
            cout << a*i<<" + ";
            sum+=a*i;
        }
        else {
            break;
        }
    }
    cout<<"....";
    for (int i=1;i<=c;i++){
        if (b*i<c and b*i != b*a){
            cout << " + "<<b*i;
            sum+=b*i;
        }
        else if (b*i > c){
            break;
        }
    }

    cout<<" = "<<sum<<endl;

    return 0;
}

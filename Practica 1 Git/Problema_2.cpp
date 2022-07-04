#include <iostream>
using namespace std;

int main()
{
    int din;
    cout<<"Ingresa la cantidad de dinero: ";
    cin>>din;

    int Bill50Mil = din/50000;
    int ModBill50mil = din%50000;

    int Bill20mil = ModBill50mil/20000;
    int ModBill20mil = ModBill50mil%20000;

    int Bill10mil = ModBill20mil/10000;
    int ModBill10mil = ModBill20mil%10000;

    int Bill5mil = ModBill10mil/5000;
    int ModBill5mil = ModBill10mil%5000;

    int Bill2mil = ModBill5mil/2000;
    int ModBill2mil = ModBill5mil%2000;

    int MonMil = ModBill2mil/1000;
    int ModMonMil = ModBill2mil%1000;

    int Mon500 = ModMonMil/500;
    int ModMon500 = ModMonMil%500;

    int Mon200 = ModMon500/200;
    int ModMon200 = ModMon500%200;

    int Mon100 = ModMon200/100;
    int ModMon100 = ModMon200%100;

    int Mon50 = ModMon100/50;
    int ModMon50 = ModMon100%50;

    cout<<"50000: "<<Bill50Mil<<endl;
    cout<<"20000: "<<Bill20mil<<endl;
    cout<<"10000: "<<Bill10mil<<endl;
    cout<<"5000: "<<Bill5mil<<endl;
    cout<<"2000: "<<Bill2mil<<endl;
    cout<<"1000: "<<MonMil<<endl;
    cout<<"500: "<<Mon500<<endl;
    cout<<"200: "<<Mon200<<endl;
    cout<<"100: "<<Mon100<<endl;
    cout<<"50: "<<Mon50<<endl;
    cout<<endl;
    cout<<"Faltante: "<<ModMon50<<endl;


    return 0;
}

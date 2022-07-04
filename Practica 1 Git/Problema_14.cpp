#include <iostream>
#include <cstdlib>
using namespace std;

int num_inv(int num){
    int inv=0;
    while(num>0){
        inv=inv * 10 + (num % 10);
        num = num / 10;
    }
    return inv;
}

int main()
{
    int num,cop_num=0,cop_mul_1,cop_mul_2;

    for (int mul_1 = 100;mul_1<=999;mul_1++){
        for (int mul_2 = 100;mul_2<=999;mul_2++){
            num = mul_1*mul_2;
            if (num == num_inv(num)){
                if (num>cop_num){
                    cop_num = num;
                    cop_mul_1 = mul_1;
                    cop_mul_2 = mul_2;
                }
            }
        }
    }

    cout<<cop_mul_1<<"*"<<cop_mul_2<<" = "<<cop_num<<endl;

    return 0;
}

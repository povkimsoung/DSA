#include<iostream>
using namespace std;

float usdToRiels(float amount){
    return amount * 4000;
}
int sumN(int n){
    int sum{};
    for (int i = 1 ; i<=n ; i++)
    sum+=i;
    return sum;
}
int main(){
    system("clear");
    cout<<usdToRiels(5)<<endl;
    cout<<usdToRiels(10)<<endl;

    cout<<sumN(10)<<endl;
    cout<<sumN(12)<<endl;


    return 0;
}
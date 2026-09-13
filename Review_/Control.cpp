#include<iostream>
using namespace std;
int main (){
    system("clear");

    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    int sum{};
    for(int i = 1 ; i<=n ; i++){
        cout<<" "<<i;
        sum = sum + i;
    }
    
    cout<<"\nResult: "<<sum<<endl;

    return 0;
}
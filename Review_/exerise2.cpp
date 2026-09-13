#include<iostream>
using namespace std;
int main(){
    system("clear");

    int num;
    cout<<"Enter Number: ";
    cin>>num;

    int option;
    cout<<"1. Sum all Even number"<<endl;
    cout<<"2. Sum all OOD number"<<endl;
    cout<<"Choose option(1-2)"<<" ";
    cin>>option;

    int sum{};
    for(int i = 1; i<=num; i++){
        if(option==1){
            if(i%2!=0) continue;
        }else{
            if(i%2==0) continue;
        }
        cout<<" "<<i;
        sum = sum + i;
    }
    cout<<endl;
    cout<<"Result is: "<<sum<<endl;

    return 0;
}
#include<iostream>
using namespace std;

void greeting(string username){
    cout<<"====================="<<endl;
    cout<<"Welcome: "<<username<<" to the program"<<endl;
    cout<<"====================="<<endl;
}

float exchangeMoney(float usd){
    return usd*4000;
}
int main(){
    system("clear");

    greeting("James");
    float result = exchangeMoney(10);
    cout<<"Result is: "<<result<<endl;


    return 0;
}
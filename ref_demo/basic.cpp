#include<iostream>
using namespace std;

void test(int &value){
    value = 999;
}

int main(){
    system("clear");

    int valueA = 10;
    test(valueA);
    cout<<"Value A is: "<<valueA<<endl;

    return 0;
}
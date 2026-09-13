#include<iostream>
using namespace std;
int main(){
    system("clear");

    int n = 10 , sum{};
    // O(n) -> operations depend n
    for(int i = 1 ; i<=n ; i++){
        sum = sum + i;
    }
    cout<<"Sum = "<<sum<<endl;

    // using Guess Formula
    // O(1)
    int result = (n * (n+1) / 2);
    cout<<"Result = "<<result<<endl;
    
    return 0;
}
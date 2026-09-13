#include<iostream>
using namespace std;

int sumOfN(int n){
    if(n == 1) return 1;

    // recursive case 
    return n + sumOfN(n - 1);
}

int factorial(int n){
    // base case
    if(n == 0 || n == 1) return 1;

    // recursive case
    return n * factorial(n - 1);
}

int fibonacci(int n){
    // base case
    if(n == 1) return 0;
    if(n == 2) return 1;

    // recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumFibonacci(int n){
    if(n == 1) return fibonacci(1);

    return fibonacci(n) + sumFibonacci(n - 1);
}

int main(){
    system("clear");

    int n = 4;
    cout << "Sum from 1 to 4: " << sumOfN(n) << endl;
    n = 5;
    cout << "Sum from 1 to 5: " << sumOfN(n) << endl;
    n = 4;
    cout << "Factorial of 4: " << factorial(n) << endl;
    n = 5;
    cout << "Factorial of 5: " << factorial(n) << endl;
    n = 6;
    cout << "Factorial of 6: " << factorial(n) << endl;
    n = 6;
    cout << "Fibonacci of 6: " << fibonacci(n) << endl;

    for(int i = 1 ; i<=10 ; i++){
        cout<<"fib("<<i<<"): "<<fibonacci(i)<<endl;
    }

    cout<<"\n+ Testing sum of fibonacci: "<<endl;
    for(int i = 1; i<=10 ; i++){
        cout<<"sumFib("<<i<<"): "<<sumFibonacci(i)<<endl;
    }

    return 0;
}
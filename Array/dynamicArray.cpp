#include<iostream>
using namespace std;
int main (){
    system("clear");

    // int* values[10];
    // allocate momory inside heap location
    int * values = new int[5]{10, 20, 30, 40, 50};

    for (int i = 0 ; i<5; i++){
        cout<<" "<<(values+i);
    }
    cout<<endl;

    cout<<"All element values: "<<endl;
    for(int i= 0 ; i<5 ; i++){
        cout<<" "<<values[i];
    }
    cout<<endl;

    // deallocate memory
    delete[] values;

    return 0;
}
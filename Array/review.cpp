#include<iostream>
using namespace std;
int main(){
    system("clear");

    // declare
    int values[]{10, 20, 30, 40, 50};

    // to find the size
    int size = sizeof(values) / sizeof(values[0]);
    cout<<"Size of array: "<<size<<endl;
    cout<<"First element: "<<values[0]<<endl;
    cout<<"Second element: "<<values[1]<<endl;

    // old-school loop (for)
    for(int i = 0 ; i<size ; i++){
        cout<<" "<<values[i];
    }
    cout<<endl;

    // for each
    cout<<"+ USING FOR EACH"<<endl;
    for(int val: values){
        cout<<" "<<val;
    }


    return 0;
}
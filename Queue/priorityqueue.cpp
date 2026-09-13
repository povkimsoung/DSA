#include<iostream>
using namespace std;
int main(){
    system("clear");

    priority_queue<int> values;

    values.push(9);
    values.push(97);
    values.push(90);
    values.push(90);
    values.push(59);

    cout<<"Print all values: "<<endl;
    while(!values.empty()){
        cout<<" "<<values.top();
        values.pop();
    }
    cout<<endl;
    

    return 0;
}
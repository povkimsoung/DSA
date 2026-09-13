#include<iostream>
#include<vector>
using namespace std;
int main(){
    system("clear");

    vector<int> arr = {10, 20, 30, 40, 50};
    cout<<"Size of array: "<<arr.size()<<endl;

    cout<<"[+] Print all elements: "<<endl;
    for(int i = 0 ; i<arr.size() ; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

    return 0;
}
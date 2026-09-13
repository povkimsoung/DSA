#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr , string message){
    cout<<"[+] "<<message<<endl;
    for(int value : arr){
        cout<<" "<<value;
    }
    cout<<endl;
}

int linearSearch (vector<int> arr , int target){
    for(int i = 0 ; i < arr.size() ; i++){
        if(target == arr[i]) 
        return i;
    }
    return -1;
}

void bubbleSort(vector<int>& arr){
    for(int i=0 ; i<arr.size() ; i++){
        for(int j=0 ; j<arr.size()-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap (arr[j], arr[j+1]);
            }
        }
    }
}

// only work after the values is sorted
void removeDuplicate(vector<int>& arr){
    int counter = 0;
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[counter] != arr[i]){
            counter++;
            arr[counter]=arr[i];
        }
    }
    arr.resize(counter+1);
}

int main (){
    system("clear");

    vector<int> values = {45,55,11,58,89,45,11,13,45}; 
    printArray(values, "Original Value of Array");
    int result = linearSearch(values, 11);
    if( result==-1 ){
        cout<<"Not Found!"<<endl;
    }else{
        cout<<"Result found at index: "<<result<<endl;
    }

    bubbleSort(values);
    printArray(values, "Array after sorted");
    removeDuplicate(values);
    printArray(values, "Array after RemoveDuplicate");

    return 0;
}
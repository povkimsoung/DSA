#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print_array (vector<int> arr , string message){
    cout<<"[+] "<<message<<endl;
    for(auto value : arr){
        cout<<" "<<value;
    }
    cout<<endl;
}

// linear search
int linear_search (vector<int> arr , int target){
    for(int i = 0 ; i < arr.size(); i++){
        if(target == arr[i]) return i;
    }
    return -1;
}

void bubble_sort (vector<int> & arr){
 // algorithm for bubble sort
    for(int i = 0 ; i<arr.size() ; i++){
        for(int j = 0 ; j<arr.size() -i-1 ; j++){
            if(arr[j] > arr[j+1]) swap(arr[j] , arr[j+1]);
        }
    }
}

void remove_duplicate(vector<int>& arr){
    // remove duplicate here
    int counter = 0;
    for (int i = 0 ; i<arr.size(); i++){
        if(arr[counter] != arr[i]){
            counter++;
            arr[counter]=arr[i];
        }
    }
    arr.resize(counter+1);
}

void printArrs(int arrs[] , int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arrs[i]<<" ";
    }
}

int main (){
    system("clear");
    int arrs[] = {10,20,30,49,50};
    int size = 5;
    vector<int> arr = { 22,34,23,56,67,67,34,12,22};
    print_array(arr, "Original Array ");

    int target = 67;
    int result = linear_search(arr,target);

    if(result==-1){
        cout<<"Not found"<<endl;
    }else {
        cout<<"Result found at index: "<<result<<endl;
    }


    bubble_sort(arr);
    print_array(arr, "Array after sorted");
    
    remove_duplicate(arr);
    print_array(arr, "Array after resized ");

    printArrs(arrs , size);
    



    return 0;
}      
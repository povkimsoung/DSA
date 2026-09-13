#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int> arr , string message){
    cout<<message<<endl;
    // operation 1 -> n
    for(auto val: arr){
        cout<<" "<<val;
    }
    cout<<endl;
}

int linearSearch(vector<int> arr , int item){
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}
int main(){
    system("clear");

    vector<int> arr = {33, 22, 55, 44, 66, 87};
    printArray(arr, "[+] Original Array: ");
    
    int item = 66;
    auto result = linearSearch(arr, item);
    if (result==-1){
        cout<<"Result not found for item: "<<item<<"!"<<endl;
    }else{
        cout<<"Found at index: "<<result<<endl;
    }

    // bubble sort -> funtion
    for(int i = 0 ; i<arr.size() ; i++){
        for(int j = 0 ; j<arr.size() -i-1 ; j++){
            if(arr[j] > arr[j+1])
            swap(arr[j] , arr[j+1]);
        }
    }
        printArray(arr, "[+] Array after sort:");

        // Binary Search 
    int itemToSearch = 87; 
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == itemToSearch) {
            cout << " ✅ Element found at index: " << mid << endl;
            break;
        } else if (arr[mid] > itemToSearch)
        {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return 0;

}
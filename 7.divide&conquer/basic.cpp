#include<iostream>
using namespace std;

int sum(vector<int> arr, int left, int right){
    // base case
    if(left==right) return arr.at(left);
    // divide
    int mid = (left + right) / 2;
    // conquer
    int leftSum = sum(arr, left, mid);
    int rightSum = sum(arr, mid+1, right);
    // combine
    return leftSum + rightSum;
}

int findMax(vector<int> arr, int right){
    // Base case: only the first element remains
    if (right == 0) return arr.at(0);

    // Find the maximum among the previous elements
    int previousMax = findMax(arr, right - 1);

    // Compare it with the current element
    return max(previousMax, arr.at(right));
}

int main(){
    system("clear");

    vector<int> values ={10,20,30,40};
    int result = sum(values, 0, values.size()-1);
    cout<<"Sum of Array is: "<<result<<endl;

    return 0;
}
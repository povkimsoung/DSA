#include<iostream>
#include<stack>
using namespace std;
int main(){
    system("clear");

    string input;
    stack<char> st;
    cout<<"Input: ";
    getline(cin,input);
    string reversedString;

    for(int i = 0 ; i<input.size() ; i++)
        st.push(input[i]);
        
    while(!st.empty()){
        reversedString = reversedString + st.top();
        st.pop();
    }

    cout<<"output: "<<endl;
    cout<<"Orignal String: "<<input<<endl;
    cout<<"Reversed String: "<<reversedString<<endl;

    return 0;
}
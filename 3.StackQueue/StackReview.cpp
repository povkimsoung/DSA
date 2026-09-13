#include<iostream>
#include<stack>
using namespace std;

int peek(stack<int> st, int pos){
    if (pos<=0 || pos>st.size())
    throw runtime_error("peek at invalid position ❌");
    for(int i=1 ; i<pos ; i++){
        st.pop(); 
    }
    return st.top();
}

void display(stack<int> st , string smg){
    cout<<"[+] "<<smg<<endl;
    while (!st.empty()){
        cout<<" "<<st.top();
        st.pop();
    }
    cout<<endl;
    
}

int getMin(stack<int> st){
    int mn = st.top();
    st.pop();
    while(!st.empty()){
        mn = min(mn,st.top());
        st.pop();
    }
    return mn;
}

int getMax(stack<int> st){
    int mx = st.top();
    st.pop();
    while(!st.empty()){
        mx = max(mx,st.top());
        st.pop();
    }
    return mx;
}

int main(){
    system("clear");

    stack<int> nums;

    for(int i=1 ; i<=10 ; i++){
        nums.push(i*100);
    }

    try{
    cout<<"Peek(1): "<<peek(nums,1)<<endl;
    cout<<"Peek(2): "<<peek(nums,2)<<endl;
    }catch(const runtime_error & e){
        cout<<e.what()<<endl;
        // solution here!
    }


    display(nums,"Original values ");
    cout<<"Min Value is: "<<getMin(nums)<<endl;  
    cout<<"Max value is: "<<getMax(nums)<<endl; 
    
    cout<<R"(
       _        _   _                            
      | |      | | | |                           
  __ _| |__    | |_| |__   ___   ___ _   _ _ __  
 / _` | '_ \   | __| '_ \ / _ \ / _ \ | | | '_ \ 
| (_| | | | |  | |_| | | | (_) |  __/ |_| | | | |  🖕🏻🖕🏻🖕🏻🖕🏻🖕🏻🖕🏻🖕🏻🖕🏻🖕🏻
 \__,_|_| |_|   \__|_| |_|\___/ \___|\__,_|_| |_|
                                                 
                                                 
    )";


    return 0;
}
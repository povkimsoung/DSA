#include<iostream>
#include<stack>
using namespace std;

int peek(stack<int> st , int pos){
    // validation position
    if(pos<=0 || pos>st.size() ){
        cout<<"Invalid position!! "<<endl;
        throw runtime_error("peek at invalid positon");
    }

    for(int i = 1 ; i<pos; i++)
    st.pop();
    return st.top();
}

void display(stack<int> st){
    while(!st.empty()){
        cout<<" "<<st.top();
        st.pop();
    }
    cout<<endl;
}

int main(){
    system("clear");

    stack<int> st;

    // add value (push) to stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // st.pop(); // delete 50
    cout<<"The top value is: "<<st.top()<<endl;
    cout<<"Size of stack: "<<st.size()<<endl;
    cout<<"is Stack Empty: "
        <<(st.empty()? " Yes ": " No")<<endl;


    cout<<"Peek(1): "<<peek(st,1)<<endl;
    cout<<"Peek(2): "<<peek(st,2)<<endl;


    cout<<"All values of stack: "<<endl;
    display(st);

    return 0;
}
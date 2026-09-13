#include<iostream>
using namespace std;
struct Student{
    int id;
    string name;
    string gender;

    void output(){
        cout<<"ID"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Gender:"<<gender<<endl;
    }
};
int main(){
    system("clear");

    Student s1;
    s1.id = 1001;
    s1.name= "messi";
    s1.gender= "male";
    
    s1.output();
    
    return 0;
}
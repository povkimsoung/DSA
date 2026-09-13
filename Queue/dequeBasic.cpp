#include <iostream>
#include <deque>
using namespace std;

void printAll(deque<int> values, string msg) {
    cout << "[+] " << msg << endl;

    while (!values.empty()) {
        cout << values.front() << " ";
        values.pop_front();
    }

    cout << endl;
}

void reveredPrint(deque<int> values) {
    cout << "[+] Using reveredPrint: " << endl;

    while (!values.empty()) {
        cout << values.back() << " ";
        values.pop_back();
    }

    cout << endl;
}

int main() {
    system("clear");   // Use "cls" on Windows

    deque<int> values;

    // Insert values
    for (int i = 1; i <= 10; i++) {
        values.push_back(i * 10);
    }

    // using iterator
    cout<<"Using iterator style: "<<endl;
    for(auto it=values.begin(); it!=values.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    printAll(values, "Using printAll()");

    cout << "[+] Using for loop: " << endl;
    for (int i = 0; i < values.size(); i++) {
        cout << values[i] << " ";
    }
    cout << endl;

    cout << "[+] Using range-based for loop: " << endl;
    for (auto val : values)
        cout << val << " ";
    cout << endl;


    values.push_front(99);
    values.push_back(99);

    values.insert(values.begin()+3, 55);
    
    values.pop_back();
    values.pop_front();



    printAll(values, "All values are: ");
    reveredPrint(values);

    return 0;
}
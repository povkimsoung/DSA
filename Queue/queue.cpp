#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void printAll(queue<int> values) {
    cout << "Queue Elements: ";

    while (!values.empty()) {
        cout << values.front() << " ";
        values.pop();
    }

    cout << endl;
}

// 
int getMin(queue<int> values) {
    int mn = values.front();
    values.pop();

    while (!values.empty()) {
        if (values.front() < mn) {
            mn = values.front();
        }
        values.pop();
    }

    return mn;
}

void reversedPrint(queue<int> values) {
    stack<int> s;


    while (!values.empty()) {
        s.push(values.front());
        values.pop();
    }


    cout << "Queue in reverse: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    system("clear");   

    queue<int> values;

    // Insert values: 0, 10, 20, ..., 100
    for (int i = 1; i <= 10; i++) {
        values.push(i * 10);
    }

    printAll(values);

    cout << "Front Value: " << values.front() << endl;
    cout << "Back Value : " << values.back() << endl;
    cout << "Size of queue: " << values.size() << endl;
    cout << "Is queue empty? " << (values.empty() ? "Yes" : "No") << endl;
    cout << "Min values is: "<< getMin(values) << endl;
    reversedPrint(values);

    return 0;
}
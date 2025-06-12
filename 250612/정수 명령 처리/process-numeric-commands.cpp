#include <iostream>
#include <stack>

using namespace std;

int N;
string command[10000];
int value;

int main() {
    cin >> N;
    stack<int> a;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value;
            a.push(value);
        }
        else if(command[i] == "pop"){
            cout << a.top() << endl;
            a.pop();
        }
        else if(command[i] == "size"){
            cout << a.size() << endl;
        }
        else if(command[i] == "empty"){
            cout << a.empty() << endl;
        }
        else if(command[i] == "top"){
            cout << a.top() << endl;
        }
    }

    

    return 0;
}

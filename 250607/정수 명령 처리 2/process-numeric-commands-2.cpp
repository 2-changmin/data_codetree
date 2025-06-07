#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;
string command[10000];
int A;

int main() {
    cin >> N;
    queue<int> s;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> A;
            s.push(A);
        }
        else if(command[i] == "pop"){
            cout << s.front() << endl;
            s.pop();
        }
        else if(command[i] == "size"){
            cout << s.size() << endl;
        }
        else if(command[i] == "empty"){
            if(s.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if(command[i] == "front"){
            cout << s.front() << endl;
        }
    }

    

    return 0;
}
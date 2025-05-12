#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;
string command[10000];
int A;

int main() {
    cin >> N;
    queue<int> k;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> A;
            k.push(A);
        }
        else if(command[i] == "pop"){
            cout << k.front() << endl;
            k.pop();
        }
        else if(command[i] == "size"){
            cout << k.size() << endl;
        }
        else if(command[i] == "empty"){
            cout << k.empty() << endl;
        }
        else if(command[i] == "front"){
            cout << k.front() << endl;
        }
    }

    

    return 0;
}
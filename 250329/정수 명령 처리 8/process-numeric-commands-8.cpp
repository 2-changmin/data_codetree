#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;
    list<int> k;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
        if(command[i] == "push_front"){
            k.push_front(A[i]);
        }
        else if(command[i] == "push_back"){
            k.push_back(A[i]);
        }
        else if(command[i] == "pop_front"){
            cout << k.front() << endl;
            k.pop_front();
        }
        else if(command[i] == "pop_back"){
            cout << k.back() << endl;
            k.pop_back();
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
        else if(command[i] == "back"){
            cout << k.back() << endl;
        }
    }

    // Please write your code here.

    return 0;
}

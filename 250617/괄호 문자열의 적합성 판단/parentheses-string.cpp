#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    stack<char> s;
    for(char i : str){
        if(i == '('){
            s.push(i);
        }
        else if(i == ')'){
            if(s.empty()){
                cout << "No";
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty()) cout << "Yes";
    else cout << "No";

    return 0;
}

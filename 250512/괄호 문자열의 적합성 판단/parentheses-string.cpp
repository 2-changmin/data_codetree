#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string str;
    cin >> str;

    stack<char> s;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '('){
            s.push('(');
        }
        else if(str[i] == ')'){
            if(s.empty()) {
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
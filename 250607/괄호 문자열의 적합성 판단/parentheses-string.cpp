#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    stack<char> s;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '('){
            s.push('(');
        }
        else{
            if(s.empty()){
                cout << "No";
                return -1;
            }
            s.pop();
        }
    }
    if(s.empty()) cout << "Yes";
    else cout << "No";
    

    return 0;
}

#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    stack<string> s;
    string a = "rr";
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '('){
            s.push(a);
        }
        else if(str[i] == ')'){
            s.pop();
        }
    }
    if(s.empty() == true) cout << "Yes";
    else cout << "No";
    

    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string A;

int main() {
    cin >> A;

    int cnt=0;
    for(int i = 0; i < A.length(); i++){
        for(int j = 0; j < A.length(); j++){
            if(A[i] != A[j]) cnt++;
        }
        if(cnt >= 1) cout << "Yes";
        break;
    }
    if(cnt == 0) cout << "No";

    return 0;
}
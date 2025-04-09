#include <iostream>

using namespace std;

int n;

int print1(int n){
    if(n == 0) return 0;
    for(int i = 0; i < n; i++){
        cout << "* ";
    }
    cout << endl;
    print1(n-1);
    for(int i = 0; i < n; i++){
        cout << "* ";
    }
    cout << endl;
    return 0;
}

int main() {
    cin >> n;

    print1(n);

    return 0;
}
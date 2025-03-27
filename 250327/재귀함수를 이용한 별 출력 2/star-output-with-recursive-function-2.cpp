#include <iostream>

using namespace std;

int n;

int star(int n){
    if(n == 0) return 0;
    for(int i = 0;i<n;i++){
        cout << "* ";
    }
    cout <<endl;
    star(n-1);
    for(int i = 0;i<n;i++){
        cout << "* ";
    }
    cout << endl;
    return 0;
}

int main() {
    cin >> n;

    star(n);

    return 0;
}
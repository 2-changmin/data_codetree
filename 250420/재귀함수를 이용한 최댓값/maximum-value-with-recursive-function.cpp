#include <iostream>
#include <cmath>
using namespace std;

int n;
int arr[100];

int max1(int n){
    if(n == 0) return arr[0];
    return max(max1(n-1),arr[n]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a = max1(n);
    cout << a;
    return 0;
}
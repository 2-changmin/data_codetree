#include <iostream>
#include <cmath>
using namespace std;

int n;
int arr[100];

int max1(int n){
    if(n == 1) return arr[0];
    return max(max1(n-1),arr[n-1]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << max1(n);

    return 0;
}
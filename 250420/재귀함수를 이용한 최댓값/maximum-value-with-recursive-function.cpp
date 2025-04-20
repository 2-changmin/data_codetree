#include <iostream>
#include <cmath>
using namespace std;

int n;
int arr[100];

int max1(int i){
    if(i == n-1) return arr[i];
    return max(arr[i],max1(i+1));
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a = max1(0);
    cout << a;
    return 0;
}
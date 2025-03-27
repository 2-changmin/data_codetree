#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int max1(int n){
    if(n == 0)
        return arr[0];
    return max(max1(n-1), arr[n]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = max1(n);
    cout << result;

    return 0;
}
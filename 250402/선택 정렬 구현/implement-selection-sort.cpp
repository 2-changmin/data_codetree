#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<n-1; i++){
        int minimum = i;
        for (int j = i+1; j<n;j++){
            if(arr[j]<arr[minimum]) minimum = j;
        }
        int tmp = arr[i];
        arr[i] = arr[minimum];
        arr[minimum] = tmp;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

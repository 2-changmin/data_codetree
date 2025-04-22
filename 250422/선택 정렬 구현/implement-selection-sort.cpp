#include <iostream>
#include <cmath>
using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++){
        int minimum = i;
        for(int j = i + 1; j < n; j++){
            if(arr[minimum] > arr[j]) minimum = j;
        }
        swap(arr[i],arr[minimum]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int n;
int arr[100];
int max2 = 0;
int max1(int n){ 
    if(n == 0) return arr[0]; // n이 0 일때 arr[0] 을 반환
    
    return max(max1(n - 1), arr[n]);
}
    


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << max1(n-1);

    return 0;
}
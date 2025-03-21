# 데이터 구조

* 재귀함수 중 값을 반환하는 재귀함수를 이용해서 gcd(최대공약수를 구하는 함수) lcm(최소공배수를 구하는 함수) 를 이용해서 최소공배수를 구하는 코드 작성
```cpp
#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int gcc(int a, int b){
    if (a == n) return b;
    return gcc(a+1, lcm(b,arr[a]));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = gcc(1,arr[0]);

    cout << result;
    
    return 0;
}
```
`inline_code();`

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

* Big-O , Big-Ω , Big-Θ<br>
**빅오, 빅오메가, 빅세타 표기법에 대해서 배우고 각각의 예제들을 풀어봄**<br>
  *Big-O 는 상한선 - 최악의 경우 프로그램의 실행 시간을 나타냄<br>
  *Big-Ω 는 하한선 - 최선의 경우 프로그램의 실행 시간을 나타냄<br>
  *Big-Θ 는 평균적인 프로그램의 실행 시간을 나타냄 (Big-O 와 Big-Ω 같은 경우 Big-Θ 로 나타낼 수 있음)<br>

#include <iostream>
#include <vector>
using namespace std;

int n;

int getdigits(vector<int>& arr){
    int maxnum = arr[0];
    for(int num:arr){
        if(num > maxnum) maxnum = num;
    }
    int cnt = 0;
    while(maxnum > 0){
        maxnum /= 10;
        cnt++;
    }
    return cnt;
}

void sort(vector<int>& arr){
    int maxdigits = getdigits(arr);
    int divisor = 1;
    for(int i = 0; i < maxdigits; i++){
        vector<vector<int>> buckets(10);
        for(int j = 0; j < n; j++){
            int digits = (arr[j]/divisor) % 10;
            buckets[digits].push_back(arr[j]);
        }
        int idx = 0;
        for(int i = 0; i < 10; i++){
            for(int num:buckets[i]){
                arr[idx++] = num;
            }
        }
    }
}

int main() {
    cin >> n;
    int k;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> k;
        arr.push_back(k);
    }

    sort(arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    

    return 0;
}

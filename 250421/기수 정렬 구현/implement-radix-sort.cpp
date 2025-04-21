#include <iostream>
#include <vector>

using namespace std;

int n;

int getmaxdigits(vector<int>& arr){
    int maxvalue = arr[0];
    for(int num:arr){
        if(num > maxvalue) maxvalue = num;
    }
    int cnt = 0;
    while(maxvalue > 0){
        maxvalue /= 10;
        cnt++;
    }
    return cnt;
}

void sort(vector<int>& arr){
    int maxdigits = getmaxdigits(arr);
    int divisor = 1;
    for(int i = 0; i < maxdigits; i++){
        vector<vector<int>> buckets(10);
        for(int j = 0; j < n; j++){
            int digits = (arr[j]/divisor) % 10;
            buckets[digits].push_back(arr[j]);
        }
        int idx = 0;
        for(int k = 0; k < 10; k++){
            for(int num:buckets[k]){
                arr[idx++] = num;
            }
        }
        divisor *= 10;
    }
    return;
}

int main() {
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

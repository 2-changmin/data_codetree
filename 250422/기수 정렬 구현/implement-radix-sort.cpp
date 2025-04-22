#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> arr;

int getmaxdigits(vector<int>& arr){
    int maxvalue = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > maxvalue) maxvalue = arr[i];
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
            int digit = (arr[j]/divisor) % 10;
            buckets[digit].push_back(arr[j]);
        }
        int idx = 0;
        for(int k = 0; k < 10; k++){
            for(int num:buckets[k]){
                arr[idx++] = num;
            }
        }
        divisor *= 10;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        arr.push_back(l);
    }
    sort(arr);
    for(int num:arr){
        cout << num << " ";
    }


    return 0;
}

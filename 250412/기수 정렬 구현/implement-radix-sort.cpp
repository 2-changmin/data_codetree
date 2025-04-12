#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<vector<int>> arr1[10];
int getmaxdigits(vector<int>& arr){
    int maxval = arr[0];
    for(int i = 1; i < n; i++){
        if(maxval < arr[i]) maxval = arr[i];
    }
    int cnt = 0;
    while(maxval > 0){
        maxval /= 10;
        cnt++;
    }
    return cnt;
}

void checknum(vector<int>& arr){
    int maxdigits = getmaxdigits(arr);
    int divisor = 1;
    for(int i = 0; i < maxdigits; i++){
        vector<vector<int>> buckets(10);

        for(int j = 0; j < n; j++){
            int digit = (arr[j] / divisor) % 10;
            buckets[digit].push_back(arr[j]);
        }
        int idx = 0;
        for(int b = 0; b < 10; b++){
            for(int num:buckets[b]){
                arr[idx++] = num;
            }
        }
        divisor *= 10;
    }
    
}

int main() {
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    checknum(arr);
    
    for(int num:arr){
        cout << num << " ";
    }

    

    return 0;
}

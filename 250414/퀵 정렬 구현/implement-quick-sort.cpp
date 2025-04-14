#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100000];

int select_pivot(int arr[],int low, int high){
    return arr[high];
}

int partition(int arr[],int low,int high){
    int pivot = select_pivot(arr,low,high);
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quick_sort(int arr[],int low,int high){
    if (low < high){
        int pos = partition(arr, low, high);
        
        quick_sort(arr,low,pos-1);
        quick_sort(arr,pos,high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    quick_sort(arr,low,high);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

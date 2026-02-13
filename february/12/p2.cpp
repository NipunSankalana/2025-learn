#include<iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr,int low, int mid, int high){
    vector<int> left {arr.begin()+low,arr.begin()+mid+1};
    vector<int> right {arr.begin()+mid+1,arr.begin()+high+1};

    int i = 0, j = 0, k = low;

    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < left.size()) arr[k++] = left[i++];
    while (j < right.size()) arr[k++] = right[j++];
}

void merge_sort(vector<int>& arr,int low, int high){
    if (low<high){
        int mid = low+(high-low)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main(){
    vector<int> arr{5, 7, 8, 77, 89, 45, 67, 100, 78, 95, 46, 35, 24, 15, 21};
    merge_sort(arr,0,arr.size()-1);
    for (int val:arr){
        cout<<val<<' ';
    }
    return 0;
}
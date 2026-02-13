#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(const vector <int>& left, const vector<int>& right){
    int i=0;
    int j=0;
    vector <int> result;
    result.reserve(left.size()+right.size());

    while (i<left.size() && j< right.size()){
        if (left[i]<right[j]){
            result.push_back(left[i]);
            i++;
        }
        else {
            result.push_back(right[j]);
            j++;
        }
    }
    while (i<left.size()){
        result.push_back(left[i]);
        i++;
    }

    while (j<right.size()){
        result.push_back(right[j]);
        j++;
    }
    return result;
}

vector<int> merge_sort(vector<int> arr){
    if (arr.size()<2){
        return arr;
    }
    else{
        int mid = arr.size()/2;
        vector <int> left_arr (arr.begin(),arr.begin()+mid);
        vector <int> right_arr {arr.begin()+mid,arr.end()};
        vector <int> left = merge_sort(left_arr);
        vector <int> right = merge_sort(right_arr);
         return merge(left,right);
    }
}

int main(){
    vector<int> arr{5,7,8,77,89,45,67,100,78,95,46,35,24,15,21};
    vector<int>sorted_arr=merge_sort(arr);
    for (int i=0;i<arr.size();i++){
        cout<<sorted_arr[i]<<' ';
    }
    return 0;
}
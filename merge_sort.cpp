#include<bits/stdc++.h>
using namespace std;
//O(log 2(n)-> for dividng)+ (O(n)-> for merging) = (O(n*log2(n)))
// space complexity = O(n) bcz its using an extra array temp to merge the elements
void merge(int arr[],int low ,int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid&&right<=high){
       
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}
void merge_sort(int arr[],int low,int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);

    merge(arr,low,mid,high);
}
int main(){
int arr[9] = {3,1,2,4,1,5,2,6,4};

    merge_sort(arr,0,8);

    for(int i =0;i<=8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 
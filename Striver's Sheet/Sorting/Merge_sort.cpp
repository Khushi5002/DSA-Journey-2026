#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int>merge(vector<int>&arr, int low, int mid, int high){
    int i=low, k=0; vector<int> b(high - low + 1);

    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
           b[k]= arr[i];
        i++; k++;}
        else{
               b[k]=arr[j];
               j++; k++;
        }
    }
    while(i<=mid){
        b[k]=arr[i];
        i++; k++;
    }
    while(j<=high){
        b[k]=arr[j];
        j++; k++;
    }
    for(int i=0; i<k; i++){
        arr[low+i]=b[i];
    }
    return arr;
}
    vector<int>Sort(vector<int>& arr, int low, int high) {
          if(low<high){
            int mid=(low+high)/2;
          arr=  Sort(arr,low,mid);
           arr= Sort(arr,mid+1,high);
           arr= merge(arr,low,mid,high);
          }
          return arr;
    }
     vector<int>mergeSort(vector<int>& nums) {
        return Sort(nums, 0, nums.size() - 1);
    }
};
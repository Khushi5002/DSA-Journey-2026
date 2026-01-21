#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>&arr,int n){
    for(int i=n-1;i>=1;i--){
        int didswap=0;
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if(didswap==0){
            break;
        }
    }
}
int main(){
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubble_sort(arr  ,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
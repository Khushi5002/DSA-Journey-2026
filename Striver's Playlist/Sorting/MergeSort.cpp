#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&a, int mid, int high, int low){
    int b[100];
    int i=0,k=0;
     int j=mid+1;
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++; k++;
        }
        else{
            b[k]=a[j];
            j++; k++;
        }
    }
    while(i<=mid){
        b[k]=a[i];
        i++; k++;
    }
    while(j<=high){
        b[k]=a[j];
        j++; k++;
    }
    for(int i=low; i<=high; i++){
        a[i]=b[i];
    }
}
  void merge_sort(vector<int>&a,int low, int high){
     if(low<high){
       int mid=(low+high)/2;
        merge_sort(a,  low, mid);
         merge_sort(a,mid+1, high);
         merge(a, mid, high,low);
    }}
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
    }
}
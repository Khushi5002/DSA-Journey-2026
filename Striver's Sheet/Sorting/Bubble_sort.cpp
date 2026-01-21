#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n=nums.size();
           for(int i=n-1; i>=1; i--){
            int didswap=0;
            for(int j=0; j<i; j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    didswap++;
                }
            }
            if(didswap==0){
                break;
            }
           }
           return nums;
    }
};
int main(){
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Solution obj;
    vector<int>sorted=obj.bubbleSort(arr);
    for(int i=0; i<n; i++){
        cout<<sorted[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
      for(int i=0; i<=nums.size()-2; i++){
         int min=i;
         for(int j=i+1; j<=nums.size()-1; j++){
            if(nums[j]<nums[min]){
                min=j;
            }
         }
         swap(nums[min],nums[i]);
      }
      return nums;
    }
};
int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> sorted = obj.selectionSort(nums);

    for (int i = 0; i < n; i++) {
        cout << sorted[i] << " ";
    }

    return 0;
}


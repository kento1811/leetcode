#include <bits/stdc++.h>

using namespace std;

    int minOperations(vector<int>& nums, int k) {
        int cnt = 0;
        for(int i = nums.size()-1; i >= 0;i--){
            int j = abs(nums[i]) -1;
            if(j < k && nums[j] > 0){
                cnt++;
                nums[j] *= -1;
            }
            if(cnt == k) return nums.size()-i;
        }
        return nums.size();
    }

int main(){

return 0;
}
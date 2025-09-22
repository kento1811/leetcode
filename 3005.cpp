#include <bits/stdc++.h>

using namespace std;

int maxFrequencyElements(vector<int>& nums) {
        int m = 0;
        int ans = 0;
        unordered_map<int,int> ma;
        for(int i = 0 ;  i < nums.size();i++){
            ma[nums[i]]++;
            if(ma[nums[i]] > m){
                ans=0;
                m = ma[nums[i]];
            }
            if(m == ma[nums[i]]){
                ans++;
            }
        }
        

        return ans*m;
    }

int main(){

return 0;
}
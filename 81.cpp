#include <bits/stdc++.h>

using namespace std;

bool search(vector<int>& nums, int target) 
    {
        int len = nums.size();

        int low = 0; 
        int high = len-1;

        while( low <=high)
        {
            int mid = (low+ high)>>1;

            if(nums[mid]==target)
            {
                return true;
            }

            if(nums[mid]!=target && nums[low ]== nums[mid] && nums[mid]==nums[high])
            {
                low++;
                high--;

                continue;
            }

            if(nums[low] <= nums[mid])
            {
                if( nums[low]<=target && nums[mid]>=target)
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }                
            }
            else
            {
                if( nums[mid]<=target && nums[high]>=target)
                {
                    low = mid+1;
                    // high = mid-1;
                }
                else
                {
                    high = mid-1;
                    // low = mid+1;
                }
            }

        }

        return false;
    }

int main(){

return 0;
}
#include <bits/stdc++.h>

using namespace std;

int peopleAwareOfSecret(int n, int delay, int forget) {
        int mod =1e9 +7;
        vector<int> dp(n+1,0);
        dp[1] = 1;
        int ans = 0;
        int j  = 1;
        for(int i = 2  ; i <= n;i++){
            int temp = 0;
            if(i - forget >= j ) j++;
            for(int k = j ; k <= i-delay;k++){
                temp = (temp%mod + dp[k]% mod)% mod ;
            }
                dp[i] = temp % mod;
            

        }
        for(int i = j ; i <= n ;i++){
            ans  = (ans%mod + dp[i]%mod)%mod;

        }
        return ans;
    }

int main(){

return 0;
}
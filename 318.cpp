#include <bits/stdc++.h>

using namespace std;

int maxProduct(vector<string>& words) {
        int n = words.size(), maxi = 0;
        unordered_map<int,int> mask;
        
        for(int i=0; i<n; i++) { 
            for(auto ch: words[i]) {
                int idx = ch-'a';
                if(((1<<idx) & mask[i])==0) {
                    mask[i] |= (1<<idx);
                }
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
               if((mask[i] & mask[j])==0) {
                  maxi = max(maxi, (int)words[i].length() * (int)words[j].length());
               }
            }
        }
        return maxi;
    }

int main(){

return 0;
}
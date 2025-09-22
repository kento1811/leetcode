#include <bits/stdc++.h>

using namespace std;

int minimumMoves(string s) {
    int ans = 0;
      for(int i=0 ;i < s.length();i++){
        if(s[i] == 'X'){
            ans++;
            s[i] = 'O';
            if(i+1 < s.length()){
                s[i+1] = 'O';
                if(i+2 < s.length()){
                    s[i+2] = 'O';
                }
            }
            
        }
      }
      return ans;  
    }

int main(){

    return 0;
}

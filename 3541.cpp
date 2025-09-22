#include <bits/stdc++.h>

using namespace std;

int maxFreqSum(string s) {
        int vowel =0;
        int consant = 0;
        vector<int> arr(26,0);
        for(int i = 0 ; i < s.length();i++){
            arr[s[i]-'a']++;
            if(s[i] == 'a' ||s[i] == 'u'||s[i] == 'i'||s[i] == 'e'||s[i] == 'o'){
                vowel = max(vowel, arr[s[i]-'a']);
            } else {
                consant = max(consant,arr[s[i]-'a']);
            }
        }
        return vowel + consant;
    }

int main(){

return 0;
}
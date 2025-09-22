#include <bits/stdc++.h>

using namespace std;

string sortVowels(string s) {
        vector<char> a;
        for(int i = 0 ; i < s.length();i++){
            if(tolower(s[i]) == 'a' ||
            tolower(s[i]) == 'e'||
            tolower(s[i]) == 'u'||
            tolower(s[i]) == 'i'||
            tolower(s[i]) == 'o'){
                a.push_back(s[i]);
                s[i] = '-';
            }
        }
        sort(a.begin(),a.end());
        int j = 0;
        for(int i=0 ;i < s.length();i++){
            if(s[i] == '-'){
                s[i] = a[j];
                j++;
            }
        }
        return s;
    }

int main(){

return 0;
}
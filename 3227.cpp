#include <bits/stdc++.h>

using namespace std;

    bool doesAliceWin(string s) {

        for(int i = 0 ; i < s.length();i++){
            if(s[i] == 'a' ||s[i] == 'e'||s[i] == 'i'||s[i] == 'u'||s[i] == 'o') return true;
        }
        return false;
    }

int main(){

return 0;
}
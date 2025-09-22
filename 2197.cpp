#include <bits/stdc++.h>

using namespace std;

    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> result;
        for (int num : nums) {
            result.push_back(num);
            while (result.size() > 1) {
                int a = result.back();
                int b = result[result.size() - 2];
                int g = gcd(a, b);
                if (g > 1) {
                    result.pop_back();
                    result.pop_back();
                    long long lcm = (long long)a / g * b;
                    result.push_back((int)lcm);
                } else {
                    break;
                }
            }
        }
        return result;
    }

int main(){
    vector<int> a = {287,41,49,287,899,23,23,20677,5,825};
    replaceNonCoprimes(a);

return 0;
}
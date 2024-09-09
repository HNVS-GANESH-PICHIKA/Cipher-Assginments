#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string concatenate_str(string &str1,string &str2){
        return str1 + str2;
    }
};
int main(){
    Solution sol;
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    cout << sol.concatenate_str(str1,str2);
    return 0;
}
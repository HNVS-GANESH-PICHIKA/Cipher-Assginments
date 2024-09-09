#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int stringLength(string &str){
        return str.length();
    }
};
int main(){
    Solution sol;
    string str;
    cout << str;
    getline(cin, str);
    cout << sol.stringLength(str);
    return 0;
}
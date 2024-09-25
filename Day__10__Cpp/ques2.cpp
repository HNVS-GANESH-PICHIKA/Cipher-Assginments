#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isPalindrome(const string &str){
       string str2;
        for(char c : str){
            if(isalpha(c)){
            str2.push_back(tolower(c));
            }
        }
        int i = 0;
        int j = str2.length() - 1;
        bool flag = true;
        while(i < j){
            if(str2[i] != str2[j]){
                flag = false;
                break;
            }
                i++, j--;
        }
        return flag;

    }
};
int main(){
    Solution sol;
    string str;
    cout << "str: ";
    cin >> str;
    bool ans = sol.isPalindrome(str);
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int count_char(string &str,char l){
        int count = 0;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == l){
                count += 1;
            }
        }
        return count;
    }
};
int main(){
    Solution sol;
    string str;
    char l;
    cin >> l;
    getline(cin, str);
    cout << sol.count_char(str,l);
    return 0;
}
//2nd ques
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void rev_str(string n){
        reverse(n.begin(), n.end());
        for(auto i : n){
            cout << i;
        }
    }
};

int main(){
    Solution sol;
    string n;
    cout << "n: ";
    getline(cin, n);

    sol.rev_str(n);

    return 0;
}
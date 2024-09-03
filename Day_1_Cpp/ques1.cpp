#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void concat(string n1, string n2){
        cout << "Concatinated string: " << n1 + n2 << endl;
    }
};

int main(){
    Solution sol;
    string n1, n2;
    cout << "str1: " << endl;
    cin >> n1;
    cout << "str2: " << endl;
    cin >> n2;

    sol.concat(n1, n2);
    return 0;


}
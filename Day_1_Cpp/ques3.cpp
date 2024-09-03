#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n){
        cout << "square: " << pow(n,2);
    }
};

int main(){

    Solution sol;
    int n;
    cout << "n: ";
    cin >> n;

    sol.answer(n);
    return 0;
}
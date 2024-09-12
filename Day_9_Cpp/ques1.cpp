#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n){
        int *pointer = &n;
        cout << "using var: " << n << endl;
        cout << "using pointer: " << *pointer;
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
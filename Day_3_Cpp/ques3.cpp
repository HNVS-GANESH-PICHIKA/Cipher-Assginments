#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n){
        int i = 1;
        while(i < 11){
            cout << n << " x " << i  << " = " << n * i;
            cout << endl;
            i++; 
        }
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
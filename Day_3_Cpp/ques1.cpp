#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum = sum + i;
        }
        cout << "Sum: " << sum << endl;
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
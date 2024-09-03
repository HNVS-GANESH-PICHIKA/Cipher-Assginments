#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n){
        if(n >= 90 & n <= 100){
            cout << "Grade A";
        }
        else if(n >= 80 & n<=89){
            cout << "Grade B";
        }
        else if(n >= 70 & n <= 79){
            cout << "Grade C";
        }
        else if(n >= 60 & n <= 69){
            cout << "Grade D";
        }
        else{
            cout << "Grade F";
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
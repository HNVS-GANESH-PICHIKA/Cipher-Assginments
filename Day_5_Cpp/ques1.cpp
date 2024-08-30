//1st ques
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void even_odd_checker(int n){
        if(n == 0){
            cout << "only +ve int" << endl;
        }
        else if(n % 2 == 0){
            cout << "Even" << endl;
        }
        else{
            cout << "Odd" << endl;
        }
    }
};
int main(){
    Solution sol;
    int n;
    cout << "n: ";
    cin >> n;

    sol.even_odd_checker(n);
    return 0; 
}
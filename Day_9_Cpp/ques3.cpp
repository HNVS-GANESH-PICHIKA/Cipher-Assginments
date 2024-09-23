#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int num){
        int *ptr = &num;
        int **ptr1 = &ptr;
        cout << *ptr << " " << **ptr1 << endl;
    }
};

int main(){
    Solution sol;
    int num;
    cout << "num: ";
    cin >> num;
    sol.answer(num);
    return 0;
}
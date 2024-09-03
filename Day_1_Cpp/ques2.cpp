#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int val, vector<int> vec1){
        for(int i = 0; i < 5; i++){
            cout << "Enter ele no " << i+1 <<": ";
            cin >> val;
            vec1.push_back(val);
        }
        int sum = 0;
        for(auto i : vec1){
            sum = sum + i;
        }
        cout << "Avg: " << sum/5 << endl;
    }
};

int main(){
    Solution sol;
    int val;
    vector<int> vec1;
    sol.answer(val, vec1);
    return 0;
}
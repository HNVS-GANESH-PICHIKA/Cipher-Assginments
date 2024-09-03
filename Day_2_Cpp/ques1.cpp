#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int arr[3]){
        //using if-else was kinda boring, wanted to be unconventional
        cout << "Enter 3 ele's: " << endl;
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }
        auto itr = max_element(arr, arr+3);
        cout << "Max ele: " << *itr;
    }
};

int main(){
    Solution sol;
    int arr[3];
    sol.answer(arr);
    return 0;
}
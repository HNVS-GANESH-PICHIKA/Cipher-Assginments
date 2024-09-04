#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n, int arr[]){
        cout << "Enter " << n << " ele for arr: " << endl;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }

        cout << "sum of ele's: " << sum << endl;
    }
};
int main(){
    Solution sol;
    int n;
    cout << "size_n: ";
    cin >> n;
    int arr[n];
    sol.answer(n, arr);
    return 0;
}
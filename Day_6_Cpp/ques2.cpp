#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n, int arr[]){
        cout << "Enter " << n << " ele's in arr: " << endl;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int sum_e = 0;
        int sum_o = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                sum_e += arr[i];
            }
            else{
                sum_o += arr[i];
            }
        }
        cout << "sum_e: " << sum_e << endl;
        cout << "sum_o: " << sum_o << endl;
     }
};
int main(){
    Solution sol;
    int n;
    cout << "n: ";
    cin >> n;

    int arr[n];
    sol.answer(n, arr);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n, int arr[]){
        cout << "Enter " << n << " ele's in arr: " << endl;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count_e = 0;
        int count_o = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                count_e += 1;
            }
            else{
                count_o += 1;
            }
        }
        cout << "count_e: " << count_e << endl;
        cout << "count_o: " << count_o << endl;
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
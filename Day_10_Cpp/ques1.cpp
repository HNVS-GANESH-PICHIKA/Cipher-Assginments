#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findMax(const int arr[], int size){
            int MAX = INT_MIN;
            for(int i = 0; i < size; i++){
                if(arr[i] > MAX){
                    MAX = arr[i];
                }
            }
            return MAX;
        }
    };
int main(){
    Solution sol;
    int n;
    cin >> n;
    int arr1[n];
    for(int i = 0; i < n; i++){
            cin >> arr1[i];
            }
    int max = sol.findMax(arr1, n);
    cout << "MAX: " << max << endl;

    return 0;
}
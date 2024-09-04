#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n, int arr[]){
        cout << "Enter " << n << " ele for arr: " << endl;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        cout << "sorted arr: ";
        for(int i = 0; i < n; i++){
            cout <<  arr[i] << " ";
        }

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
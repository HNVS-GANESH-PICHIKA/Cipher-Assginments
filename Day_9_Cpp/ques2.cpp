#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int arr[], int size){
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }

        int * ptr = &arr[0];
        for(int i = 0; i < size; i++){
            cout << *(ptr + i) << " ";
        }
    }
};

int main(){
    Solution sol;
    int size;
    cout << "size: ";
    cin >> size;
    int *arr = new int[size];
    sol.answer(arr, size);
    delete[] arr;
    return 0;
}
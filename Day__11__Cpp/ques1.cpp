#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout << "size: ";
    cin >> size;
    vector<int> arr(size);
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int key;
    cout << "key: ";
    cin >> key;
    auto it = find(arr.begin(), arr.end(), key);
    if(it != arr.end()){
        cout << "found at " << distance(arr.begin(), it);
    }
    else{
    cout << "not found";
}}
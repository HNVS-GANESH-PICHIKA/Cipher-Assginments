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
    bool flag = false;
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            cout << "pos: " << i+1;
            flag = true;
            break;
        }
    }
    if(flag == false){
    cout << "not found";
    }
}
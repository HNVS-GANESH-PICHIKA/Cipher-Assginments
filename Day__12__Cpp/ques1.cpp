#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *nextptr;
    Node(int d) : data(d), nextptr(NULL) {};
    };

    Node *convert_arr_lnklist(int arr[], int size){
        Node *head = new Node(arr[0]);
        Node  *current = head;

        for(int i = 1; i < size; i++){
            current->nextptr = new Node(arr[i]);
            current = current->nextptr;
            }
        return head;
    }
    void print_lnklist(Node *convert_arr_lnklist){
        Node *current = convert_arr_lnklist;
        while(current != NULL){
            cout << current->data << " ";
            current = current->nextptr;
        }

    }
int main(){
    int size;
    string symbol;
    cin >> size;
    int *arr = new int [size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; 
        if (i < size - 1) {
            cin >> symbol; 
        }
    }

    Node *cal = convert_arr_lnklist(arr, size);

    print_lnklist(cal);
    
    delete[] arr;
    return 0;

}
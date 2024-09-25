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
    Node *insert_at_tail(Node *head, int key){
        Node * tail = new Node(key);
        Node *current = head;
        while(current->nextptr != NULL){
            current = current->nextptr;
        }
        current->nextptr = tail;
        current->nextptr->nextptr = NULL;

        return head;
    }
    void print_lnklist(Node *head){
        Node *current = head;
        while(current != NULL){
            cout << current->data << " ";
            current = current->nextptr;
        }
    }

int main(){
    int size;
    cin >> size;
    int *arr = new int [size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; 
    }
    int key;
    cin >> key;

    Node * head = convert_arr_lnklist(arr, size);
    head = insert_at_tail(head, key);

    print_lnklist(head);
    
    delete[] arr;
    
    Node *current = head;
    while(current != NULL){
        Node *temp = current;
        current = current->nextptr;
        delete[] temp;
    }
    return 0;

}
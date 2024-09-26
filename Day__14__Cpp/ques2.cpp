#include <bits/stdc++.h>
using namespace std;

class Rectangle{
public:
    int length;
    int breadth;
    //base parametarized const
    Rectangle(int l, int b) : length(l), breadth(b) {};
    // cp const
    Rectangle(const Rectangle &object) : length(object.length), breadth(object.breadth){
        cout << "Copy constructor called!" << endl;    
    }

    //using member func/method
    void print(){
        cout << length << " " << breadth << endl;
    }
    //regular func/method
    void print_using_non_mem(Rectangle obj){
        obj.print();
    }
};

int main(){
    int l, b;
    cin >> l >> b;
    Rectangle obj1(l,b);
    Rectangle obj2 = obj1;

    obj1.print();
    //The copy constructor is typically called in a few scenarios, 
    //like object initialization or when passing objects to functions.
    obj2.print();
    obj1.print_using_non_mem(obj1);
    return 0;

}
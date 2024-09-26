#include <bits/stdc++.h>
using namespace  std;

class Car{
public:
    string brand, model, engine;
    int no;

    Car(string b, string m, string e, int n) : brand(b), model(m), engine(e), no(n) {}

    void print() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number: " << no << endl;
    }
};

int main(){
    Car myCar("Toyota", "Camry", "V6", 1234);
    myCar.print();
    return 0;

}
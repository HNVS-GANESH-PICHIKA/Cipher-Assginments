//2nd ques
#include <bits/stdc++.h>
using namespace std;

class Complex{
public:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}

    Complex add_cnum(const Complex& C1,const Complex& C2){

        Complex temp1;

        temp1.real = C1.real + C2.real;
        temp1.imaginary = C1.imaginary + C2.imaginary;

    // cout << "addition of c1 & c2: " << temp1.real << "+ i" << temp1.imaginary << endl;
    // }
        return temp1;
    }
    Complex minus_cnum(const Complex& C1,const Complex& C2){
        Complex temp2;

        temp2.real = C1.real - C2.real;
        temp2.imaginary = C1.imaginary - C2.imaginary;

    // cout << "subtraction of c1 & c2: " << temp2.real << "- i" << temp2.imaginary << endl;
    // }
        return temp2;    
    }
};

int main(){
    Complex sol;
    int r1, i1;
    int r2, i2;

    cout << "r1: ";
    cin >> r1;
    cout << "i1: ";
    cin >> i1;
    cout << "r2: ";
    cin >> r2;
    cout << "i2: ";
    cin >> i2;

    Complex C1(r1, i1);
    Complex C2(r2, i2);

    Complex C3, C4;

    C3 = sol.add_cnum(C1, C2);
    cout << "addition of c1 & c2: " << C3.real << "+ i" << C3.imaginary << endl;
    C4 = sol.minus_cnum(C1, C2);
    cout << "subtraction of c1 & c2: " << C4.real << "- i" << C4.imaginary << endl;


    return 0;
}

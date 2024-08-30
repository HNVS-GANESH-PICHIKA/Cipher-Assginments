//1st Ques
#include <bits/stdc++.h>
using namespace std;
class Solution1{
public:
    void ques1(int n, int m){
        cout << "Addition: " << n + m << endl;
        cout << "Subtraction: " << n - m << endl;
        cout << "Multiplication: " << n * m << endl;
        cout << "Division: " << n / m << endl;
        cout << "Modulus: " << n % m << endl;
    }
};

int main(){
    Solution1 sol;
    int n, m;
    cout << "Enter first number: ";
    cin >> n;
    cout << "Enter second number: ";
    cin >> m;

    sol.ques1(n,m);
    return 0;
}
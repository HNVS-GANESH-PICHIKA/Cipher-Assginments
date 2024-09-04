#include <bits/stdc++.h>
using namespace std;

class Soltuion{
public:
    void answer(int n){
        int fac = 1;
        for(int i = 1; i <= n; i++){
            fac = fac * i;
        }
        cout << "fac: " << fac << endl;
    }
};

int main(){
    Soltuion sol;
    int n;
    cout << "n: ";
    cin >> n;

    sol.answer(n);
    return 0;
}
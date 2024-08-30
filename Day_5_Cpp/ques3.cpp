//3rd ques
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void str_checker(string n){
        string vowel = "aeiou";
        int count = 0;
        for(auto i : vowel){
            for(auto j : n){
                if(i == j){
                    count = count + 1;
                }
            }
        }
        cout << "No of vowels: " << count << endl;
        int size = n.size();
        int consonants = size - count;
        cout << "No of consonants: " << consonants << endl;
    }
};

int main(){
    Solution sol;
    string n;
    cout << "n: ";
    cin >> n;

    sol.str_checker(n);

    return 0;
}
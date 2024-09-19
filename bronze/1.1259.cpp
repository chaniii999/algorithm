#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {

        string temp = "";
        cin >> temp;
        if (temp == "0")
            return 0;
        string copy = temp;
        reverse(copy.begin(), copy.end());
        if (temp == copy)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
    
    

}
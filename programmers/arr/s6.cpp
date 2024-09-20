#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    char arr[5][15] = {'\0'};
    int answer = "";

    for (int i = 0; i < 5; i++) {
        int temp;
        cin >> temp;
        for (int j = 0; j < temp.size(); j++)
            arr[i][j] = temp[j];
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[j][i]== '\0')
                continue;
            answer += arr[j][i];
        }
    }
    
    cout << answer;
    return 0;

}
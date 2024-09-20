#include <bits/stdc++.h>
using namespace std;

void deleteDq(deque<int>& dq, bool isReversed) {
    if (isReversed){
        dq.pop_back();
    } else {
        dq.pop_front();
    }
}

deque<int> createDeque(string num) {
    deque<int> dq;
    string temp = "";
    for (int i = 0; i < num.size(); i++) {
        if (isdigit(num[i]))
            temp += num[i];
        else if (num[i] == ',' || num[i] == ']') {
            if (!temp.empty()){
                dq.push_back(stoi(temp));
                temp = "";
            }
        }
    }

    return dq;
}

int t,n;
string cmd, num;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;

    while (t--) {
        cin >> cmd >> n >> num;
        deque<int> dq = createDeque(num);
        bool isReversed = false;
        bool isOk = true;

        for (int i = 0; i < cmd.size(); i++) {
            if (cmd[i] == 'R')
                isReversed =!isReversed;
            else if (cmd[i] == 'D') {
                if (dq.empty()) {
                    cout << "error\n";
                    isOk = false;
                    break;
                } else {
                    deleteDq(dq, isReversed);
                }
            }
        }
if (isOk) {
            cout << "[";
            if (!dq.empty()) {
                if (isReversed) {
                    // 뒤집힌 경우 뒤에서부터 출력
                    for (int i = dq.size() - 1; i > 0; i--) {
                        cout << dq[i] << ",";
                    }
                    cout << dq[0];  // 마지막 숫자는 콤마 없이 출력
                } else {
                    // 정상적인 순서로 출력
                    for (int i = 0; i < dq.size() - 1; i++) {
                        cout << dq[i] << ",";
                    }
                    cout << dq.back();  // 마지막 숫자는 콤마 없이 출력
                }
            }
            cout << "]\n";
        }
    }






}
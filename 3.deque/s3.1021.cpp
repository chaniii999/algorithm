#include <bits/stdc++.h>
using namespace std;



deque<int> dq;
void goRight() {
    dq.push_back(dq.front());
    dq.pop_front();
}

void goLeft() {
    dq.push_front(dq.back());
    dq.pop_back();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    deque<int> seq(m); 
    int ans = 0;

    for (int i = 0; i < m; i++)
        cin >> seq[i];
    for (int i = 1; i <= n; i++)
        dq.push_back(i);
    while (m > 0) {
        auto it = find(dq.begin(), dq.end(), seq.front());
        auto f = distance(dq.begin(), it);
        auto b = distance(it, dq.end());
        if (f > b) {
            while (dq.front()!= seq.front()) {
                goLeft();
                ans++;
            }
        }
        else {
            while (dq.front()!= seq.front()) {
                goRight();
                ans++;
            }
        }
        dq.pop_front();
        seq.pop_front();
        m--;
    }
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> gp;
vector<int> dis;

int bfs(int end) {
    queue<int> q;
    q.push(1);
    dis[1] = 0;
    while (!q.empty()) {
        int cur= q.front(); q.pop();

        for (int next : gp[cur]) {
            if (dis[next] != INT_MAX) continue;
            dis[next] = dis[cur] + 1;
            q.push(next);
            
            // end에 도달했을경우 end의 최소 간선 수를 반환
            if (next == end) return dis[next];
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    gp.resize(n + 1);
    dis.resize(n + 1, INT_MAX); // 최댓값으로 초기화

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        gp[a].push_back(b);
    }

    for (int i = 2; i <= n; i++) { // 2부터 n까지 반복
        fill(dis.begin(),dis.end(), INT_MAX);
        int distance = bfs(i);
        cout << i << ":" << distance << "\n";
    }
}
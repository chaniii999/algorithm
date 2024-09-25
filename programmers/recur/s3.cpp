#include <bits/stdc++.h>
using namespace std;

// Feat : 해당 거리까지의 경우의 수 -  백트래킹 탐색, 방향 그래프 구현


int n, m;
vector<vector<int>> graph(n + 1);
vector<bool> vis(n + 1, false);
int result = 0;

void dfs(int cur) {
    if (cur == n) {
        result++;
        return;
    }

    for (int next : graph[cur]) {
        if (vis[next]) continue;
        vis[next] = true; // 방문처리 후
        dfs(next); // 다음 처리
        vis[next] = false; // for문 다음 요소의 루트 재활용 (ex a-b-c, a-b-e)
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }

    vis[1] = true;
    dfs(1);

    cout << result;
}

#include <bits/stdc++.h>
using namespace std;

// Feat : 최소 거리의 경우의 수 -  백트래킹 탐색, 방향 그래프 구현

// .... 최소에는 bfs 최대에는 dfs로 쓰자.
int n, m;
vector<vector<int>> graph(21);
vector<bool> vis(21, false);
int result = 0;
 
void dfs(int cur) {
    if (cur == n) {
        result++;
        return;
    }

    for (int next : graph[cur]) {
        if (vis[next]) continue;
        vis[next] = true; // next 방문처리
        dfs(next); // 다음 회차로 이동
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

    vis[1] = true; //시작위치 방문.
    dfs(1);

    cout << result;
}

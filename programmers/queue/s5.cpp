#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);
	while (q.size() > 1) {
		// k -1 명은 큐의 뒤로 보낸다.
		for (int i = 0; i < k -1; i++) {
			q.push(q.front());
			q.pop();
		}
		// k번째 왕자를 제외시킨다.
		q.pop();
	}

	cout << q.front();

}
#include <bits/stdc++.h>
using namespace std;

bool strDisit(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (!isdigit(str[i])) {
			return false;
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; // 포켓몬의 개수
	int m; // 문제의 개수
	cin >> n >> m;
	vector<string> mons(n);
 	for (int i = 0; i < n; i++) {
		cin >> mons[i];
	}
	for (int i = 0; i < m; i++) {
		string temp = "";
		cin >> temp;
		if (strDisit(temp)) {
			int k = stoi(temp);
			cout << mons[k-1] << "\n";
		}
		else {
			for (int j = 0; j < m; j++) {
				if (temp == mons[j]) {
					cout << j+1 << "\n";
					break;
				}
			}
		}
	}

}
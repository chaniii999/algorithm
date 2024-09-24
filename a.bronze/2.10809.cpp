#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int alp[26];
	fill(alp, alp+26, -1);
	for (char c: str) {
		alp[c - 'a'] = str.find(c);
	}
	for (int i: alp) {
		cout << i << " ";
	}

}
#include <bits/stdc++.h>
using namespace std;

int sans(const vector<int>& arr) {
    int sum = accumulate(arr.begin(), arr.end(), 0);
    return round((double)sum / arr.size());
}

int mid(vector<int> arr) {
    return arr[arr.size() / 2];
}

int mode(vector<int> arr) {
    unordered_map<int, int> count;
    for (int num : arr) {
        count[num]++;
    }

    int maxCount = 0;
    vector<int> modes;
    for (const auto& p : count) {
        if (p.second > maxCount) {
            maxCount = p.second;
            modes.clear();
            modes.push_back(p.first);
        } else if (p.second == maxCount) {
            modes.push_back(p.first);
        }
    }

    // 두 번째 최빈값을 반환 (있을 경우)
    if (modes.size() > 1) {
        sort(modes.begin(), modes.end());
        return modes[1];  // 두 번째 최빈값
    }
    return modes[0];
}

int range(vector<int> arr) {
    return arr[arr.size() - 1] - arr[0];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << sans(arr) << "\n";
    cout << mid(arr) << "\n";
    cout << mode(arr) << "\n";
    cout << range(arr) << "\n";
    return 0;


}
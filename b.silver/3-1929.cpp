#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;
    cin >> m >> n;

    vector<bool> isPrime(n+1, true); //인덱스로 소수 판별
    vector<int> primes; // 소수를 저장할 vector
    
    isPrime[0] = isPrime[1] = false; // 0,1은 소수가 아님

    for (int i = 2; i*i <=n; ++i) { 
        // 왜 2부터인가? : 2의 배수부터 삭제하기때문.
        if (isPrime[i])
            for (int j = i*i; j <= n; j += i)
                isPrime[j] = false; // 현재 i의 배수들을 컷
    }
    for (int i = max(m,2); i <= n; i++) {
        if (isPrime[i])
          primes.push_back(i);
    }
    for (int k:primes)
        cout << k << "\n";
}
#include <bits/stdc++.h>
using namespace std;
#define int long long

// n'th Catalan number Cn = choose(2 * n, n) / (n + 1)
// https://www.geeksforgeeks.org/applications-of-catalan-numbers/

const int N = 105;
const int mod = 1e9 + 7;

int dp[N];

int catalan(int n) {
    int &mem = dp[n];
    if (mem != -1)
        return mem;

    if (n <= 1)
        return mem = 1;

    int res = 0;
    for (int i = 0; i < n; i++)
        res = (res + catalan(i) * catalan(n - 1 - i)) % mod;
    return mem = res;
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    memset(dp, -1, sizeof(dp));
    
    int T = 1; 
    cin >> T; 
    while (T--) {
        int n;
        cin >> n;
        cout << catalan(n) << '\n';
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define int long long

/*
    Disjoint Set Union / Union Find (DSU)
    For 1D/2D DSU: https://codeforces.com/contest/506/problem/D
*/
const int N = 1e5 + 5;

int par[N], sz[N];

void make(int v) {
    par[v] = v;
    sz[v] = 1;
}

int find(int v) {
    if (v == par[v])
        return v;
    return par[v] = find(par[v]);
}

void unions(int u, int v) {
    u = find(u);
    v = find(v);
    if (u != v) {
        if (sz[u] < sz[v])
            swap(u, v);
        par[v] = u;
        sz[u] += sz[v];
    }
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t = 1; 
    // cin >> t; 
    while (t--) {
        
    }
    
    return 0;
}

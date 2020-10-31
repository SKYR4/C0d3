#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5 + 5;
const int MX = 1e7 + 5;

int n, q, a[N];
int tree[4 * MX];

void build(int i, int l, int r) { // build(1, 0, n - 1);
    if (l == r) 
        tree[i] = a[l];
    else {
        int mid = (l + r)/2;
        build(2 * i, l, mid);
        build(2 * i + 1, mid + 1, r);
        
        tree[i] = tree[2 * i] + tree[2 * i + 1]; // Operation
    }
}
 
void update(int i, int l, int r, int pos, int val) {
    if (l == r)
        tree[i] = val;
    else {
        int mid = (l + r) / 2;
        if (pos <= mid)
            update(2 * i, l, mid, pos, val);
        else
            update(2 * i + 1, mid + 1, r, pos, val);
        
        tree[i] = tree[2 * i] + tree[2 * i + 1]; // Operation
    }
}
 
int query(int i, int l, int r, int ql, int qr) { // query(1, 0, n - 1, l, r)
    if (ql > qr) 
        return 0;
    if (ql == l && qr == r)
        return tree[i];
  
    int mid = (l + r) / 2;
    int res_left = query(2 * i, l, mid, ql, min(qr, mid));
    int res_right = query(2 * i + 1, mid + 1, r, max(ql, mid + 1), qr);

    return res_left + res_right; // Operation
}

int cntInversion() {
    memset(tree, 0, sizeof(tree)); 
  
    int cnt = 0; 
    for (int i = 0; i < n; i++) { 
        cnt += query(1, 1, MX, a[i] + 1, MX); 
        update(1, 1, MX, a[i], 1); 
    } 

    return cnt;
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int T = 1; 
    // cin >> T; 
    while (T--) {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        cout << cntInversion() << '\n';
    }
    
    return 0;
}

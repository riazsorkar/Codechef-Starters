#include <bits/stdc++.h>

using namespace std;

const int MOD = 1'000'000'007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while (t--) {
        int n, d;
        cin >> n >> d;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int ns = 0;
        for (int i = 0; i < n; ++i) {
            ns ^= a[i];
        }
        
        int p = d + 1;
        int q = 2 * d;
        
        long long z = 1;
        long long po = MOD - 2;
        long long ba = q;
        
        while (po > 0) {
            if (po % 2 == 1) {
                z = (z * ba) % MOD;
            }
            ba = (ba * ba) % MOD;
            po /= 2;
        }
        
        long long result;
        if (ns == 0) {

            result = 0;
        } else {
            result = (p * z) % MOD;
        }
        
        cout << result << endl;
    }
    
    return 0;
}

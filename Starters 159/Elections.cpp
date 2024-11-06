#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int N, X;
        cin >> N >> X;
        vector<int> A(N), B(N);
        
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < N; ++i) cin >> B[i];
        
        int current_wins = 0;
        vector<int> votes_needed;
        
        for (int i = 0; i < N; ++i) {
            if (A[i] > B[i]) {
                current_wins++;
            } else {
                votes_needed.push_back(B[i] - A[i] + 1);
            }
        }
    
        int required_wins = (N / 2) + 1;
        if (current_wins >= required_wins) {
            cout << "YES" << endl;
            continue;
        }

        sort(votes_needed.begin(), votes_needed.end());
        
        int needed_wins = required_wins - current_wins;
        bool can_win = false;
        
        for (int i = 0; i < votes_needed.size() && needed_wins > 0; ++i) {
            if (X >= votes_needed[i]) {
                X -= votes_needed[i];
                needed_wins--;
                if (needed_wins == 0) {
                    can_win = true;
                    break;
                }
            } else {
                break;
            }
        }
        
        if (can_win) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

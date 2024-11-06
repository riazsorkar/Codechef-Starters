#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;

        int odd_count = (N + 1) / 2;
        int even_count = N / 2;

        if (X % 2 == 0) {
            cout << (even_count - 1) << "\n";
        } else {
            cout << (odd_count - 1) << "\n";
        }
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int test;
    cin >> test;

    for (int i = 0; i < test; ++i) {
        int n;
        cin >> n;

        int ec = 0;
        int oc = 0;

        for (int j = 1; j <= n; ++j) {
            if (n % j == 0) {
                if (j % 2 == 0) {
                    ec++;
                } else {
                    oc++;
                }
            }
        }

        if (ec > oc) {
            cout << 1 << endl;
        } else if (ec == oc) {
            cout << 0 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}

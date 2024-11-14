#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin >> x >> y >> z;
    int NoCombo = (2*x) + (3*y);
    int combo = (2*z) + y;

    int result = min(NoCombo, combo);

    cout << result << endl;
    return 0;
}
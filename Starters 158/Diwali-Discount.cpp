#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,r;
    cin >> a >> b;

    if (a>=b){
        r = a-b;
        cout << r << endl;
    }else {
        cout << "0" << endl;
    }
    return 0;
}
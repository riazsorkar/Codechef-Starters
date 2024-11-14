#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin >> testcase;

    while(testcase--){
        int n,k;
        cin >> n >> k;

        int min = n*10;
        int max = n*12;

        if (min <= k && k <= max){
            cout << "Yes" <<endl;
        }else{
            cout << "No" <<endl;
        }
        min = 0;
        max =0;
    }

    return 0;
}
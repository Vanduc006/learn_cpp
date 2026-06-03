#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int count=0;
    // int value=0;

    int i=a.size();
    for (int i=9; i >= 0; i--) {
        while (n >= a[i]) {
            n -= a[i];
            count++;
        }
    }
    cout << count;
    
}
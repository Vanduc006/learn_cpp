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
    int count=0;
    int sum=0;

    if (n % 4 == 0) {
        while (sum < n) {
            sum += 4;
            count++;
        }

        while(count--) cout << "4";
    } else if (n % 7 == 0) {
        while (sum < n) {
            sum += 7;
            count++;
        }

        while(count--) cout << "7";
    } else cout << "-1";
}
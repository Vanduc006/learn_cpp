#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dem(int n, int m) {
    int count=0;
    for (ll i=m; i <= n; i += m) {
        ll j=i;
        while(j%m==0) {
            ++count;
            j /= m;
        }
    }
    return count;
}
// Trailing zero
int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int dem_2 = dem(n, 2);
    int dem_5 = dem(n, 5);
    cout << min(dem_2, dem_5);

}
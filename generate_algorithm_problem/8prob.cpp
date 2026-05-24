#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
int n;
int a[10005];
bool final = false;

void generate() {
    int i=n-1;
    while (i >= 1 && a[i] > a[i+1]) {
        i--;
    } if (i == 0) {
        final=true;
    } else {
        // a[j] nho nhat ma > a[i]
        int j=n;
        while (a[i] > a[j]) --j;
        swap(a[i], a[j]);
        // xep tang dan tu i+1, n;
        sort(a+i+1, a+n+1);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    for (int i=1; i <= n; i++) {
        // cin >> a[i];
        a[i] = i;
    }

    int b[n];
    for (int i=1; i <= n; i++) cin >> b[i];
    
    // while(!final) {
    //     for (int i=1; i <= n; i++) cout << a[i] << " ";
    //     cout << endl;
    //     generate();
    // }
    int i=0;
    int ans=0;
    while(!final) {
        i++;
        if (a[1] == b[1] && a[n] == b[n]) {
            ans=i;
            break;
        }
        generate();
    }
    cout << ans;
    // cout << i-ans+1;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n; int k;
int a[100005];
bool final=false;

void generate() {
    int i=k;
    while (i >= 1 && a[i] == n - k + i) {
        i--;
    }
    
    if (i == 0) {
        final = true;
    } else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    int b[k];
    int ans=0;
    for (int i=1; i <= k; i++) {
        a[i] = i;
    }

    for (int i=1; i <= k; i++) {
        cin >> b[i];
        // cout << b[i];
    }

    int i=0;
    while (!final) {
        i++;
        if (a[1] == b[1] && a[k] == b[k]) {
            ans=i;
        }
        // cout << endl;
        generate();
    }
    // cout << ans << endl;
    cout << i-ans+1;
    // for (int i=1; i <= k; i++) cout << a[i] << " ";
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n; int k;
int a[10005];
bool final=false;

void create() {
    for (int i=1; i <= k; i++) a[i]=1;
}

void generate() {
    int i=k;
    while (i >= 1 && a[i] == n) {
        // a[i]=a[i]-1;
        i--;
    } if (i == 0) {
        final=true;
    } else {
        a[i]++;
        for (int j=i+1; j <= k; j++) a[j]=1;
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
    create();
    while(!final) {
        for (int i=1; i <= k; i++) cout << a[i] << " ";
        cout << endl;
        generate();
    }
}
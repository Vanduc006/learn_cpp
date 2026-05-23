#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n; 
int a[1000];
bool final=false;

void create() {
    for (int i=1; i < n; i++) {
        a[i]=0;
    }
}

void generate() {
    int i=n;
    while(i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0) {
        final = true;
    }
    else {
        a[i] = 1;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    n = s.size();
    for (int i=1; i <= n; i++) {
        a[i] = s[i-1] - '0';
    }
    // cin >> n;
    // create();
    // while (final == false) {
    //     for (int i=1; i <= n; i++) cout << a[i] << " ";
    //     cout << endl;
    //     generate();
    // }
    generate(); 

    if (final == true) {
        while(n--) cout << 0;
    } else {
        // for (int x : a) cout << x << " ";
        for (int i=1; i <= n; i++) cout << a[i];
    }
}
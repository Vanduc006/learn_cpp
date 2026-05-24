#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n;
char a[100005];
bool final = false;

void create() {
    for (int i=1; i <= n; i++) a[i] = 'B';
}

void generate() {
    int i=n;
    while (i >= 1 && a[i] == 'A') {
        a[i] = 'B';
        i--;
    }
    if (i == 0) final = true;
    else a[i] = 'A';
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    create();
    while (!final) {
        for (int i=1; i <= n; i++) cout << a[i];
        cout << endl;
        generate();
    }

}
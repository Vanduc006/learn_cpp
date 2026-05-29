#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n;
int a[1005];
bool final=false;
int cnt=1;

void generate() {
    int i=n;
    while(i >= 1 && a[i] == 1) {
        a[i]=0;
        i--;
    } if (i == 0) {
        final=true;
    } else {
        // a[i+1]=a[i]+1;
        a[i]=1;
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
    a[n]=1;
    vector<vector<int>> v;
    while (!final) {
        vector<int> tmp;
        for (int i=1; i <= n; i++) {
            if (a[i] == 1) {
                // cout << i << " ";
                tmp.push_back(i);
            }
        }
        v.push_back(tmp);
        generate();
    }
    sort(v.begin(), v.end());
    for (auto it : v) {
        for (int x : it) {
            cout << x << " ";
        }
        cout << endl;
    }
}
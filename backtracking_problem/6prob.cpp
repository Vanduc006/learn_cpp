#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[10005];
int cot[10005];
int xuoi[10005];
int nguoc[10005];
int n;
int ans=0;

void backtracking(int i) {
    for (int j=1; j <= n; j++) {
        if (cot[j] == 0 && xuoi[i-j+n] == 0 && nguoc[i+j-1] == 0) {
            a[i]=j;
            cot[j]=1;
            xuoi[i-j+n]=1;
            nguoc[i+j-1]=1;
            if (i == n) {
                ans++;
            } else {
                backtracking(i+1);
            }
            cot[j]=0;
            xuoi[i-j+n]=0;
            nguoc[i+j-1]=0;
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
    cin >> n;
    backtracking(1);
    cout << ans;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
int a[10005];
bool final=false;
int cnt=1;

void generate() {
    int i=cnt;
    int sum=0;

    while (i >= 1 && a[i] == 1) {
        i--;
        sum++;
    } if (i == 0) {
        final = true;
    } else {
        a[i]--;
        sum++;
        int x = a[i];
        while (sum > x) {
            i++;
            a[i]=x;
            sum -= x;
        }
        if (sum > 0) {
            i++;
            a[i] = sum; 
        }
        cnt=i;
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
    a[1]=n;
    while (!final) {
        for (int i=1; i <= cnt; i++) cout << a[i] << " ";
        cout << endl;
        generate();
    }
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n;
int k;
int a[10005];
bool final=false;

void generate() {

}

int check1() {
    int sum=0;
    for (int i=1; i <= n; i++) {
        sum += a[i];
    }
    return sum == k;
}

int check2() {
    int cur_len=0;
    int cnt=0;
    for (int i=1; i <= n; i++) {
        if (a[i]) {
            cur_len++;
        } else {
            return 0;
        } 
        if (cur_len == k) {
            cnt++;
        }
    }
    return cnt==1;
    
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
}
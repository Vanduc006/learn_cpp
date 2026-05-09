#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Mang hieu
    // After each iteration, it increase K value from Left - Right
    // diff[i] = a[i] - a[i-1] of difference array
    // Perfix sum of that pre[i] = a[i-1] + a[i] -> Original array

    // L,R,K
    // diff[L] += K; 
    // Then all a[i] start from L increase by K
    // diff[R+1] -= K;
    // Then all a[i] start from R+1 decrese by K
    // -> So only a[i] from L to R increase by K




}
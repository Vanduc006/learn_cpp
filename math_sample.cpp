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

    // Phan tich thua so nguyen to
    ll n; cin >> n;
    ll res = n;
    for (int i=2; i < sqrt(n); i++) {
        if (n%i==0) { // divisible
            int mu=0;
            while (n%i==0) {
                ++mu;
                n /= i;
            }
            if (mu%2==1) {
                res *= i;
            }
        }
    }
    if (n>1) res *= n;
    cout << res;

    // Tim uoc
    int n; cin >> n;
    ll mod = pow(10,9)+7;
    ll uoc = 1;

    while(n--) {
        int p; int e;
        cin >> p >> e;
        e %= mod; 
        uoc *= e + 1;
        uoc %= mod;
    }

    cout << uoc;

    // Bac cua thua so nguyen to
    // Eg n=13, x=3. 13! divisible 3^?
    // int dem(int n, int m) {
    //     int count=0;
    //     for (ll i=m; i <= n; i += m) {
    //         ll j=i;
    //         while(j%m==0) {
    //             ++count;
    //             j /= m;
    //         }
    //     }
    // return count;


    // Trailing zero = min(dem(n,2), dem(n,5))
}
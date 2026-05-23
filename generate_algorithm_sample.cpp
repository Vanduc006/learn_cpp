// Thuat toan sinh
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n; 
int a[1000005];
bool final = false;
void create() {
    for (int i=1; i <= n; i++) a[i] = 0;
}

void generate() {
    int i=n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
    } 
    if (i == 0) {
        final = true;
    } else {
        a[i] == 1;
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Brute force 
    // cau hinh dau tien - cau hinh cuoi cung   
    // Eg binary 00000
    // if (bin == 0) bin = 1; end
    // else bin = 0;
    cin >> n;
    create();
    while (final == false) {
        for (int i=1; i <= n; i++) cout << a[i] << " ";
        cout << endl;
        generate();
    }

}
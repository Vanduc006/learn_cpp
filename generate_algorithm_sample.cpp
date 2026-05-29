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

    // Generate binary
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

    // Giao hoan n, k
    // generate() ... while (i >= 1 && a[i] == n - k + i)
        // i + 1 => k
        // j=i+1; a[j]=a[j-1]+1


    // Hoan vi 1 den n
    // Eg n=3; 123 132 213 ...
    // generate() i=n-1 while(i >= 1 && a[i] > a[i+1])
        // a[j] nho nhat ma > a[i]
        // int j=n;
        // while (a[i] > a[j]) --j;
        // swap(a[i], a[j]);
        // xep tang dan tu i+1, n;
        // sort(a+i+1, a+n+1);
    // built in fucntion : next_permutation(a, a+n)
    // prev_permutation(a, a+n)


    // Sinh phan hoach N
    // Eg 5 4+1 3+2 2+2+1 ...
        // total=n
        // min=1
        // giam dan

        // a[i] != 1, a[i]--
            // int i=cnt;
            // int sum=0;

            // while (i >= 1 && a[i] == 1) {
            //     i--;
            // } if (i == 0) {
            //     final = true;
            // } else {
            //     a[i]--;
            //     sum++;
            //     int x = a[i];
            //     while (sum > x) {
            //         i++;
            //         a[i]=x;
            //         sum -= x;
            //     }
            //     if (sum > 0) {
            //         a[i] = sum; 
            //     }
            //     cnt=i;
            // }
        // }

}
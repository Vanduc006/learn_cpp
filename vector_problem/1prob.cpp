#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

bool is_prime(int n) {
    int i=2;
    bool result=true;
    while (i <= sqrt(n)) {
       if(i >= 2 && i != n) {
            if(n%i==0) {
                 result = false;
                // cout << 1;
            } 
       } 
       i++;
    }
    return result;
}

void nhap(vector<int> &v) {
    cout << "nhap" << endl;
    int n; cin >> n;
    for (int i=0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
}

void in(vector<int> v) {
    for (int i=0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

vector<int> prime_list(vector<int> v) {
    vector<int> list;
    for (int i=0; i < v.size(); i++) {
        if (is_prime(v[i]) && v[i] >= 2) {
            list.push_back(v[i]);
        }        
    }
    return list;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> v;
    nhap(v);

    vector<int> result = prime_list(v);

    in(result);

}
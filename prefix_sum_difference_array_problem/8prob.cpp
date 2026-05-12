// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main() {
//     #ifndef ONLINE_JUDGE
//     freopen("../input.txt","r",stdin);
//     freopen("../output.txt","w",stdout);
//     #endif
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n; int m; int k;
//     cin >> n >> m >> k;

//     int a[n];
//     for (int &x : a) cin >> x;
//     int diff_a[100];
//     int pre_a[100];
//     int tansuat[100];
//     int pre_tansuat[100];
//     vector<pair<pair<int, int>, int>> thaotac;
//     // int pre_tansuat[n] = {0};

//     while(m--) {
//         int l; int r; int d;
//         cin >> l >> r >> d;
//         thaotac.push_back({{l, r}, d});
//     }

//     while(k--) {
//         int l; int r;
//         cin >> l >> r;
//         tansuat[l]++;
//         tansuat[r+1]--;
//     }

//     for (int i=0; i < m; i++) {
//         if (i == 0) pre_tansuat[i] = tansuat[i];
//         else pre_tansuat[i] = pre_tansuat[i-1] + tansuat[i];
//     }

//     for (pair<pair<int, int>, int> p : thaotac) {
//         diff_a[p.first.first] += p.second * pre_tansuat[p.first.first];
//         diff_a[p.first.second] += p.second * pre_tansuat[p.first.second];
//     }


// }
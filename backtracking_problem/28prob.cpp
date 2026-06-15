#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<vector<int>> v;
int n;

void backtracking(vector<int> tmp, int sum) {
    for (int j=1; j <= n; j++) {
        sum += j;
        tmp.push_back(j);
        if (sum == n) {
            v.push_back(tmp);
        } else if (sum < n) {
            backtracking(tmp, sum);
        }
        sum -= j;
        tmp.pop_back();
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

    vector<int> tmp;
    backtracking(tmp, 0);
    sort(v.begin(), v.end());

    for (int i=0; i < v.size(); i++) {
        // cout << v[i].size();
        for (int j=0; j < v[i].size(); j++) {
            cout << v[i][j];
            if (j == v[i].size() - 1) cout << endl;
            else cout << " + ";
        }
    }

}
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int helper(int trgt, vector<int> &dp) {
    if (trgt < 0) return 0;
    if (trgt == 0) return 1;
    if (dp[trgt] != -1) return dp[trgt];

    int ways = 0;
    for (int i = 1; i <= 6; i++) {
        ways = (ways + helper(trgt - i, dp)) % mod;
    }

    return dp[trgt] = ways;
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << helper(n, dp) << endl;
}

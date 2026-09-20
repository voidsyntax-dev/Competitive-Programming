// Problem: B - Wild Card
// Platform: atcoder
// Contest: abc476
// Rating/Difficulty: abc476
// Language: C++17
// Verdict: Accepted
// URL: https://atcoder.jp/contests/abc476/tasks/abc476_b
// Solved on: 2026-09-20T17:19:23.293Z

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio;

    int T;
    cin >> T;
    string s1, s2;
    cin >> s1 >> s2;
    string ans {"Yes"};

    while (T--) {
        if (!((s1[T] == s2[T]) or (s2[T] == '*')))
        {
            ans = "No";
            break;
        }
    }
    cout << ans;
    return 0;
}
// Problem: A - Appender
// Platform: atcoder
// Contest: abc476
// Rating/Difficulty: abc476
// Language: C++17
// Verdict: Accepted
// URL: https://atcoder.jp/contests/abc476/tasks/abc476_a
// Solved on: 2026-09-20T15:52:16.346Z

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio;

    string s;
    cin >> s;

    if ((s.back() != 'e') or (s.empty()))
    {
        cout << s + "er";
    }
    else
    {
        cout << s + "r";
    }
    return 0;
}
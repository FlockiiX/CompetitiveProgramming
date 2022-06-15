//============================================================================
// problem-link: https://codeforces.com/problemset/problem/41/A
// status: accepted
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    cout << (s == t ? "YES" : "NO") << endl;
    return 0;
}
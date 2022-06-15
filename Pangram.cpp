//============================================================================
// problem-link: https://codeforces.com/problemset/problem/520/A
// status: accepted
//============================================================================

#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, count;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++) {
        if (s[i] != s[i + 1]) {
            count++;
        }
    }

    cout << (count == 26 ? "YES" : "NO") << endl;
    return 0;
}
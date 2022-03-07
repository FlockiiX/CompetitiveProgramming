//============================================================================
// problem-link: https://codeforces.com/problemset/problem/136/A
// status: accepted
//============================================================================
#include <iostream>
using namespace std;

int n, p, f[105];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p;
        f[p] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << f[i] << " ";
    }
    return 0;
}
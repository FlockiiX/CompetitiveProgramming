//============================================================================
// problem-link: https://codeforces.com/problemset/problem/268/A
// status: accepted
//============================================================================
#include <iostream>
#include <vector>
using namespace std;

int n, number;
int main() {
    cin >> n;
    vector<int> h(n), a(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i] >> a[i];
        for (int j = 0; j < i; j++) {
            if (h[i] == a[j]) number++;
            if (a[i] == h[j]) number++;
        }
    }

    cout << number << endl;
    return 0;
}
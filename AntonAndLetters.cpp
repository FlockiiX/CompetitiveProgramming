//============================================================================
// problem-link: https://codeforces.com/problemset/problem/443/A
// status: accepted
//============================================================================
#include <iostream>
#include <set>
using namespace std;

string s;
set<char> sc;
int main() {
    getline(cin, s);
    for (char &i: s) {
        if (i >= 'a' && i <= 'z') {
            sc.insert(i);
        }
    }

    cout << sc.size() << endl;
    return 0;
}
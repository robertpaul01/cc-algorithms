#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
#define precision(n) setprecision(n)
typedef long double ld;
typedef long long ll;

int main() { _
    int n, d, x; cin >> n >> d >> x;
    int eaten = 0;
    forn(i, 0, n) {
        int ai; cin >> ai;
        for (int x = 1; x <= d; x += ai) {
            eaten++;
        }
    }
    cout << eaten + x << nl;
    return 0;
}
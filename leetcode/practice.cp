#ifdef DEBUG
#include "bits/stdc++.h"
#include "parser.cp"
#endif
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
template <typename... Args>
void dbg(Args&&... args) {
  using expander = int[];
  (void)expander {0,(static_cast<void>(void(cout << std::forward<Args>(args) << " ")), 0)...};
  cout << endl;
}
void gen() {exit(0);}

class Solution {
public:
  int minPatches(vector<int>& nums, int n) {
    int ans = 0;
    return ans;
  }
};

#ifdef DEBUG
int main() {
    Solution s;
//    Parser p;
//    freopen("input", "r", stdin);
    vector<int> v = {1,3};
    cout << s.minPatches(v, 6);
    cout << endl;
}
#endif

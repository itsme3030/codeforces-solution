#include<bits/stdc++.h>
using namespace std;
long long t = 0;
#define ll    long long int
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) (a * b) / gcd(a, b)
const ll mod = 1000000007;
const long double pi = 3.14159265358979323846264338327950288419716939937510582097494459230;
#define int ll
void solve();
int bin_expo(int a, int b) {
    int ans = 1;
    while (b > 0) {
        if (b % 2) {
            ans = ans * a;
        } b/=2;
        a = a * a;
    } return ans;
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin >> tt;  while (tt--)
        solve();
    return 0;
}
//-----------------------------------------------------------------------------------------------------------------------

//sol.
void solve() {
    set<int> st;
    int n; cin >> n;
    vector<int> v(n); for (auto &x : v) cin >> x;
    int mn = v[0];
    int mn2 = INT_MAX;
    // set<int> smlcnt; 
    int ans = 0;
    // vector<int> getaheads;
    for (int i = 1; i < n; i++) {
        if (v[i] > mn)  {
            if (v[i] < mn2) {
                mn2 = v[i];
                ans++;
            } 
            // smlcnt.insert(v[i]);
            // auto it2 = smlcnt.upper_bound(v[i]); it2--;
            // int get = distance(smlcnt.begin(), it2);
            // getaheads.push_back(get);
        } else {
            mn = v[i];
        }
    }
    cout << ans << "\n";
    // int count = 0;
    // if (getaheads.empty()) {
    //     cout << 0 << "\n";
    //     return;
    // }
    // for (int i = 0; i < getaheads.size(); i++) {
    //     if (getaheads[i] == 0) count++;
    // }
    // cout << count << "\n";

}

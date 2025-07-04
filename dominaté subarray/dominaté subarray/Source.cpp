#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin >> t;


    while (t--) {
        ll n;
        cin >> n;
        ll a;
        ll l = 2e6;
        map<ll, ll>mp;
        for (ll i = 1; i <= n; i++) {
            cin >> a;
            if (mp[a] == 0)
                mp[a] = i;
            else if (mp[a] != 0) {
                ll ans = i - mp[a];
                mp[a] = i;
                l = min(l, ans);
            }
        }
        if (l == 2e6)cout << -1 << endl;
        else cout << ++l << endl;
    }
}
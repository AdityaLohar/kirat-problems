#include <iostream>
#include <climits>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <algorithm>
#define ll long long
#define ld long double
#define pb push_back
#define pll pair<ll, ll>
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rrep(i, a, b) for (ll i = b; i >= a; i--)
#define all(x) (x).begin(), (x).end()
using namespace std;
ll mod = 1e9 + 7;

void solve() {
    ll n;
    cin>>n;

    set<ll> st;
    map<ll, set<ll>> mp;

    for(ll i=0; i<n; i++) {
        ll k;
        cin >> k;


        for(ll j=0; j<k; j++) {
            ll num;
            cin >> num;

            mp[i].insert(num);
            st.insert(num);
        }
    }

    ll mx = 0;

    for(auto it: st) {
        set<ll> st1;

        for(ll i=0; i<n; i++) {
            if(mp[i].find(it) == mp[i].end()) {
                for(auto it1: mp[i]) {
                    st1.insert(it1);
                }
            }
        }
        ll sz = st1.size();
        mx = max(mx, sz);
    }

    cout << mx << endl;
}

int main() {
    solve();
}
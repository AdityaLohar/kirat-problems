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
    ll n, k;
    cin >> n >> k;

    ll arr[n];
    map<ll, ll> mp;
    
    for(ll i=0; i<n; i++) {
        cin >> arr[i];
    }

    ll len = 0;
    for(ll i=0; i<k; i++) {
        mp[arr[i]]++;
    }

    vector<ll> ans;
    len = mp.size();

    ans.push_back(len);

    for(ll i=k; i<n; i++) {
        if(mp[arr[i-k]] == 1) {
            len--;
        }

        mp[arr[i - k]]--;

        if(mp[arr[i]] == 0) {
            len++;
        }

        mp[arr[i]]++;

        ans.push_back(len);
    }

    for(ll i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
        cout << endl;
    }
}
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
    // You solution goes here...
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
        cout << ans[i] <<" ";
    }
    cout << endl;
}

string trim(const string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    size_t last = str.find_last_not_of(" \t\n\r");
    if (first == string::npos || last == string::npos) {
        return "";
    }
    return str.substr(first, last - first + 1);
}

void tesitng() {
    // Redirect cin to simulate input and capture output
    stringstream input, output;
    streambuf *cinbuf = cin.rdbuf();
    streambuf *coutbuf = cout.rdbuf();
    cin.rdbuf(input.rdbuf());
    cout.rdbuf(output.rdbuf());

    // Test Case 1
    input.str("7 4\n1 2 1 3 4 2 3\n");
    solve();
    string actualOutput = output.str();
    string expectedOutput = "3 4 4 3\n";
    assert(trim(actualOutput) == trim(expectedOutput));
    input.clear(); output.str("");

    // Test Case 2
    input.str("5 2\n1 2 2 1 2\n");
    solve();
    actualOutput = output.str();
    expectedOutput = "2 1 2 2\n";
    assert(trim(actualOutput) == trim(expectedOutput));
    input.clear(); output.str("");

    // Test Case 3
    input.str("6 3\n4 4 4 4 4 4\n");
    solve();
    actualOutput = output.str();
    expectedOutput = "1 1 1 1\n";
    assert(trim(actualOutput) == trim(expectedOutput));
    input.clear(); output.str("");

    // Test Case 4
    input.str("8 5\n1 2 3 4 5 6 7 8\n");
    solve();
    actualOutput = output.str();
    expectedOutput = "5 5 5 5\n";
    assert(trim(actualOutput) == trim(expectedOutput));
    input.clear(); output.str("");

    // Test Case 5
    input.str("3 1\n1 2 3\n");
    solve();
    actualOutput = output.str();
    expectedOutput = "1 1 1\n";
    assert(trim(actualOutput) == trim(expectedOutput));
    input.clear(); output.str("");

    // Test Case 6
    input.str("10 5\n1 2 3 4 5 1 2 3 4 5\n");
    solve();
    actualOutput = output.str();
    expectedOutput = "5 5 5 5 5 5\n";
    assert(trim(actualOutput) == trim(expectedOutput));
    input.clear(); output.str("");

    // Test Case 7
    input.str("9 3\n5 4 5 4 5 4 5 4 5\n");
    solve();
    actualOutput = output.str();
    expectedOutput = "2 2 2 2 2 2 2\n";
    assert(trim(actualOutput) == trim(expectedOutput));
    input.clear(); output.str("");

    // Test Case 8
    input.str("8 4\n8 7 6 5 4 3 2 1\n");
    solve();
    actualOutput = output.str();
    expectedOutput = "4 4 4 4 4\n";
    assert(trim(actualOutput) == trim(expectedOutput));
    input.clear(); output.str("");

    // Test Case 9
    input.str("7 2\n9 9 8 8 7 7 6\n");
    solve();
    actualOutput = output.str();
    expectedOutput = "1 2 1 2 1 2\n";
    assert(trim(actualOutput) == trim(expectedOutput));
    input.clear(); output.str("");

    // Test Case 10
    input.str("5 5\n1 1 1 1 1\n");
    solve();
    actualOutput = output.str();
    expectedOutput = "1\n";
    assert(trim(actualOutput) == trim(expectedOutput));
    input.clear(); output.str("");

    // Restore cin and cout
    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);
}

int main() {
    tesitng();
    cout << "All tests passed!" << endl;
}
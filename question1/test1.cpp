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
    // Your code goes here...
}

void testHashTable() {
    // Redirect cin to simulate input and capture output
    stringstream input, output;
    streambuf *cinbuf = cin.rdbuf();
    streambuf *coutbuf = cout.rdbuf();
    cin.rdbuf(input.rdbuf());
    cout.rdbuf(output.rdbuf());

    // Test Case 1
    input.str("1\n3 1 2 3\n");
    solve();
    assert(output.str() == "0\n");
    input.clear(); output.str("");

    // Test Case 2
    input.str("2\n3 1 2 3\n3 4 5 6\n");
    solve();
    assert(output.str() == "3\n");
    input.clear(); output.str("");

    // Test Case 3
    input.str("2\n2 1 2\n2 2 3\n");
    solve();
    assert(output.str() == "2\n");
    input.clear(); output.str("");

    // Test Case 4
    input.str("3\n2 1 2\n2 3 4\n2 5 6\n");
    solve();
    assert(output.str() == "4\n");
    input.clear(); output.str("");

    // Test Case 5
    input.str("3\n3 1 2 3\n3 3 4 5\n3 5 6 7\n");
    solve();
    assert(output.str() == "6\n");
    input.clear(); output.str("");

    // Test Case 6
    input.str("4\n1 1\n1 2\n1 3\n1 4\n");
    solve();
    assert(output.str() == "3\n");
    input.clear(); output.str("");

    // Test Case 7
    input.str("4\n3 1 2 3\n3 3 4 5\n2 5 6\n3 6 7 8\n");
    solve();
    assert(output.str() == "7\n");
    input.clear(); output.str("");

    // Test Case 8
    input.str("5\n2 1 2\n2 2 3\n2 3 4\n2 4 5\n2 5 6\n");
    solve();
    assert(output.str() == "5\n");
    input.clear(); output.str("");

    // Test Case 9
    input.str("1\n1 1\n");
    solve();
    assert(output.str() == "0\n");
    input.clear(); output.str("");

    // Test Case 10
    input.str("2\n1 1\n1 2\n");
    solve();
    assert(output.str() == "1\n");
    input.clear(); output.str("");

    // Test Case 11
    input.str("3\n1 1\n1 2\n1 3\n");
    solve();
    assert(output.str() == "2\n");
    input.clear(); output.str("");

    // Test Case 12
    input.str("2\n3 1 2 3\n2 3 4\n");
    solve();
    assert(output.str() == "3\n");
    input.clear(); output.str("");

    // Test Case 13
    input.str("3\n3 1 2 3\n3 2 3 4\n3 3 4 5\n");
    solve();
    assert(output.str() == "4\n");
    input.clear(); output.str("");

    // Test Case 14
    input.str("4\n2 1 2\n2 2 3\n2 3 4\n2 4 5\n");
    solve();
    assert(output.str() == "4\n");
    input.clear(); output.str("");

    // Test Case 15
    input.str("4\n2 1 2\n3 2 3 4\n3 3 4 5\n2 4 5\n");
    solve();
    assert(output.str() == "4\n");
    input.clear(); output.str("");

    // Test Case 16
    input.str("4\n3 1 2 3\n3 3 4 5\n3 5 6 7\n3 7 8 9\n");
    solve();
    assert(output.str() == "8\n");
    input.clear(); output.str("");

    // Test Case 17
    input.str("5\n2 1 2\n2 2 3\n2 3 4\n2 4 5\n2 5 6\n");
    solve();
    assert(output.str() == "5\n");
    input.clear(); output.str("");

    // Test Case 18
    input.str("6\n2 1 2\n2 2 3\n2 3 4\n2 4 5\n2 5 6\n2 6 7\n");
    solve();
    assert(output.str() == "6\n");
    input.clear(); output.str("");

    // Test Case 19
    input.str("6\n3 1 2 3\n3 3 4 5\n3 5 6 7\n3 7 8 9\n3 9 10 11\n3 11 12 13\n");
    solve();
    assert(output.str() == "12\n");
    input.clear(); output.str("");

    // Restore cin and cout
    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);
}

int main() {
    testHashTable();
    cout << "All tests passed!" << endl;
}
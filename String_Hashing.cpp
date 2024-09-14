#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define X first
#define Y second

const ll M = 1e9 + 7;
const ll BASE1 = 5689;
const ll BASE2 = 8861;

struct Hash {
    vector<pair<ll, ll>>hashes, power;

    ll value(char c){
        return (c - 'a' + 1);
    }

    Hash(string s) {
        hashes.assign(s.size() + 1, {1, 1});
        power.assign(s.size() + 1, {1, 1});
        for (ll i = 0; i < (ll)(s.size()); i++) {
            hashes[i + 1] = {(hashes[i].first * BASE1 + value(s[i])) % M, (hashes[i].second * BASE2 + value(s[i])) % M};
            power[i + 1] = {(power[i].first * BASE1) % M, (power[i].second * BASE2) % M};
        }
    }

    pair<ll, ll> get(ll l, ll r) {
        l++, r++;
        ll hash1 = (hashes[r].first - ( hashes[l - 1].first * power[r - l + 1].first) % M + M) % M;
        ll hash2 = (hashes[r].second - (hashes[l - 1].second * power[r - l + 1].second) % M + M) % M;
        return {hash1, hash2};
    }
};
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    string s; cin>>s;
    string t; cin>>t;
    Hash big(s), small(t);

    ll ans = 0;
    int i = 0, j = t.size() - 1;
    while(j < s.size()) {
        if(big.get(i, j) == small.get(0, t.size() - 1)) {
            ans++;
        }
        i++, j++;
    }
    cout<<ans<<endl;
}
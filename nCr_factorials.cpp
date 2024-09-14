#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define X first
#define Y second

ll binpow(ll a, ll b, ll M){
    ll res = 1;
    while(b > 0){
        if(b&1) res = (res*a)%M;
        a = (a*a)%M;
        b >>= 1;
    }
    return res;
}

ll modinv(ll a, ll M) {return binpow(a, M-2, M);}

vector<ll> fact(ll n, ll M){
    vector<ll> f(n+1, 1);
    for(int i=2; i<=n; i++) f[i] = (f[i-1]*i)%M;
    return f;
}
ll ncr(ll n, ll r, ll M, vector<ll>& fact){
    if(r > n) return 0;
    ll res = fact[n];
    res = (res*binpow(fact[r], M-2, M))%M;
    res = (res*binpow(fact[n-r], M-2, M))%M;
    return res;
}
ll ncr_mod(ll n, ll r, ll M){
    ll num = 1;
    for(ll i=n; i>=n-r+1; i--) num = (num*i)%M;
    ll den = 1;
    for(ll i=1; i<=r; i++) den = (den*i)%M;
    return (num*binpow(den, M-2, M))%M;
}
ll ncr(ll n, ll r){
    double sum = 1;
    for(int i = 1; i <= r; i++){
        sum = sum * (n - r + i) / i;
    }
    return ll(sum);
}
 
int main() {
    cout<<modinv()<<"\n";
}
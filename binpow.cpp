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


int main() {
    cout<<binpow(2, 5, 1e9+7)<<"\n";
}



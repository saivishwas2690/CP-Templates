#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define X first
#define Y second
 
vector<bool> seive(int n){
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i=2; i*i<=n; i++) if(is_prime[i]) for(int j=i*i; j<=n; j+=i) is_prime[j] = false;
    return is_prime;
}
vector<int> SPF(int n){
    vector<int> spf(n+1);
    for(int i=0; i<=n; i++) spf[i] = i;
    for(int i=2; i<=n; i++) if(spf[i] == i) for(int j=i*2; j<=n; j+=i) spf[j] = min(spf[j], i);
    return spf;
}
vector<int> prime_factorise(int n){
    vector<int> factors;
    for(int i=2; i*i<=n; i++){
        while(n%i == 0){
            factors.pb(i);
            n /= i;
        }
    }
    if(n > 1) factors.pb(n);
    return factors;
}

vector<ll> divs(ll n){
    vector<ll>factors;
    for(ll i=1; i*i<=n; i++){
        if(n%i == 0){
            factors.pb(i);
            if(i != n/i) factors.pb(n/i);
        }
    }
    return factors;
}

int main() {
    
}
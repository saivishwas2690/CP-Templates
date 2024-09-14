#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define X first
#define Y second
 
int phi(int n){
    int result = n;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            while(n%i == 0) n /= i;
            result -= result/i;
        }
    }
    if(n > 1) result -= result/n;
    return result;
}
int phi_1_to_n(int n){
    vector<int> phi(n+1, i);
    phi[0] = 0;
    phi[1] = 1;
    for(int i=2; i<=n; i++) if(phi[i] == i) for(int j=i; j<=n; j+=i) phi[j] -= phi[j]/i;
    return phi;
}
 
int main() {
    
}
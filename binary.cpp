#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define X first
#define Y second


vector<int> ll_bits(ll n) {
    vector<int> bits(64); 
    for(int i = 63; i >= 0; i--) {
        bits[i] = n % 2;
        n = n >> 1;
    }
    return bits;
}

int bits_to_int(const vector<int>& bits) {
    int n = 0;
    for(int i = 0; i < 32; i++) {
        n = (n << 1) | bits[i];
    }
    return n;
}

vector<int> int_bits(int n) {
    vector<int> bits(32); 
    for(int i = 31; i >= 0; i--) {
        bits[i] = n % 2;
        n = n >> 1;
    }
    return bits;
}

ll bits_to_ll(const vector<int>& bits) {
    ll n = 0;
    for(int i = 0; i < 64; i++) {
        n = (n << 1) | bits[i];
    }
    return n;
}



int main() {
    vector<int>bits;
    int_bits(5, bits);
    for(int i=0;i<32;i++) cout<<bits[i]<<" ";
}
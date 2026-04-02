#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9 + 7;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

//rbegin()
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        while(n){
            if(n%2==0) n=n/2;
            else break;
        }  

        if(n!=1) cout<<"YES"<<endi;
        else cout<<"NO"<<endi;
    }
}
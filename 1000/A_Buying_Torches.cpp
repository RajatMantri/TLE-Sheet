#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9 + 7;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

//rbegin()
ll ceil(ll x,ll y){
    return (x+y-1)/y;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;

        ll ans=ceil(k*(1+y)-1,x-1);
        cout<<ans+k<<endi;
    }
}
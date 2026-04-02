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
       ll a,b;
       cin>>a>>b;

       if(a==b){
            cout<<0<<" "<<0<<endi;
       } 
       else{
            ll maxi=max(a,b);
            ll mini=min(a,b);
            ll hcf=maxi-mini;

            cout<<maxi-mini<<" "<<min(a%hcf,hcf-a%hcf)<<endi;
       }
    }
}
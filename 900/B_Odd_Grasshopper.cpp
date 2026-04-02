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
        ll x,n;
        cin>>x>>n;

        int k=n%4;
        n=n-k;
        
        ll ans=x;
        n++;

        for(int i=1;i<=k;i++){
            if(ans&1) ans+=n;
            else ans-=n;

            n++;
        }

        cout<<ans<<endi;
    }
}
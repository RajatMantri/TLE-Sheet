#include<bits/stdc++.h>
using namespace std;
#define end "\n"
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
        ll a,b,n;
        cin>>a>>b>>n;
        ll ans=b;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            ans+=min(x,a-1);
        }
        cout<<ans<<endl;
    }
}
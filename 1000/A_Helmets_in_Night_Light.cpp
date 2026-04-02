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
    ll t;
    cin>>t;
    while(t--){
        ll n,p;
        cin>>n>>p;

        ll ans=p;
        ll rem=n-1;

        //cost , max persons 
        vector<pair<ll,ll>> a(n);
        for(ll i=0;i<n;i++) cin>>a[i].second;
        for(ll i=0;i<n;i++){
            cin>>a[i].first;
        }
        
        a.push_back({p,1e5+10});
        
        sort(a.begin(),a.end());

        for(auto& i:a){
            if(i.second<=rem){
                ans+=i.first*i.second;
                rem-=i.second;
            }
            else{
                ans+=i.first*rem;
                break;
            }
        }

        cout<<ans<<endi;
    }
}
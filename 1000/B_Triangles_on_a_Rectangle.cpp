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
        int w,h;
        cin>>w>>h;

        ll ans=0;

        for(int i=0;i<2;i++){
            int k;cin>>k;
            int mini=INT_MAX,maxi=INT_MIN;
            for(int i=0;i<k;i++){
                int x;cin>>x;
                mini=min(mini,x);
                maxi=max(maxi,x);
            }
            ans=max(ans,h*1LL*(maxi-mini));
        }

        for(int i=0;i<2;i++){
            int k;cin>>k;
            int mini=INT_MAX,maxi=INT_MIN;
            for(int i=0;i<k;i++){
                int x;cin>>x;
                mini=min(mini,x);
                maxi=max(maxi,x);
            }
            ans=max(ans,w*1LL*(maxi-mini));
        }

        cout<<ans<<endi;
    }
}
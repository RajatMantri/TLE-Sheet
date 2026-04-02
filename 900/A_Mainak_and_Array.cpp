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
        int n;
        cin>>n;

        int mini=INT_MAX;
        int maxi=INT_MIN;
        int ans=INT_MIN;
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i!=0){
                ans=max(ans,a[i-1]-a[i]);
                maxi=max(maxi,a[i]);
            }
            if(i!=n-1){
                mini=min(mini,a[i]);
            }
        }

        ans=max(a[n-1]-a[0],ans);
        ans=max({ans,a[n-1]-mini,maxi-a[0]});

        if(n==1) ans=0;
        cout<<ans<<endi;
    }
}
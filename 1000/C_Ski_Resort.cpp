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
        int n,k,q;
        cin>>n>>k>>q;

        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        ll ans=0;

        int i=0;
        while(i<n){
            int count=0;
            while(i<n&&a[i]<=q){
                count++;i++;
            }
            i++;
            if(count>=k){
                ans+=(count+1-k)*1LL*(count+2-k)/2;
            }
        }

        cout<<ans<<endi;
    }
}
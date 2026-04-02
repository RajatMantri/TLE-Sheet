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
        vector<int> a(n);

        for(int i=0;i<n;i++) cin>>a[i];

        ll ans=0;
        bool fl=1;

        for(int i=n-2;i>=0;i--){
            if(a[i+1]==0){
                fl=0;break;
            }
            while(a[i]>=a[i+1]){
                a[i]=a[i]>>1;
                ans++;
            }
        }

        if(fl==0) ans=-1;
        cout<<ans<<endi;
    }
}
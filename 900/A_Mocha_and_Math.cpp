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
        int n;cin>>n;
        
        int ans;
        cin>>ans;

        for(int i=1;i<n;i++){
            int x;cin>>x;
            ans&=x;
        }

        cout<<ans<<endi;
    }
}
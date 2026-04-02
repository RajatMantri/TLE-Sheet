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
        ll n,k,x;

        cin>>n>>k>>x;

        ll mini=k*(k+1)/2,maxi=k*(2*n+1-k)/2;

        if(mini<=x&&maxi>=x) cout<<"YES"<<end;
        else cout<<"NO"<<end;
    }
}
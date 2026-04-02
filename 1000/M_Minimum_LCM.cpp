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
      ll n;cin>>n;
      bool fl=1;
      if(n&1){
        for(int i=3;i*i<=n;i++){
            if(n%i==0){
                cout<<n/i<<" "<<(i-1)*n/i<<endi;
                fl=0;
                break;
            }
        }
        if(fl) cout<<1<<" "<<n-1<<endi;
      } 
      else{
        cout<<n/2<<" "<<n/2<<endi;
      } 
    }
}
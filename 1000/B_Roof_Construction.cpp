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

       n--;

       //not power of 2
       if(n&(n-1)){
            int x=n;
            int g=0;
            while(x){
                g++;x=x>>1;
            }
            g=1<<(g-1);
            int st=n-g;

            for(int i=st+1;i<g;i++) cout<<i<<" ";
            int t=0;
            for(int i=g;i<=n;i++){
                if(t){
                    cout<<i<<" "<<i-g<<" ";
                }
                else{
                    cout<<i-g<<" "<<i<<" ";
                }
                t=t^1;
            }
            cout<<endi;
       } 
       else{
            for(int i=1;i<n;i++) cout<<i<<" ";
            cout<<0<<" "<<n<<endi;
       }
    }
}
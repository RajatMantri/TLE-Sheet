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
        int a,b,c;
        cin>>a>>b>>c;
        // mid
        if((a+c)%2==0&&((a+c)/2)%b==0) cout<<"YES"<<endi;
        // first
        else if((2*b-c)%a==0&&(2*b-c)>0) cout<<"YES"<<endi;
        // last
        else if(2*b!=a&&(2*b-a)%c==0&&(2*b-a)>0) cout<<"YES"<<endi;
        else cout<<"NO"<<endi;
    }
}
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
       int n,k;
       cin>>n>>k; 
       string s;
       cin>>s;

       int ans=INT_MAX;
       int count=0;

       for(int i=0;i<k;i++) if(s[i]=='W') count++;
       ans=count;

       int i=k;
       while(i<n){
            if(s[i-k]=='W') count--;
            if(s[i]=='W') count++;
            ans=min(ans,count);
            i++;
       }

       cout<<ans<<endi;
    }
}   
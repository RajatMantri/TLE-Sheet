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
       string s;
       cin>>s;

       int o=0,z=0;
       for(auto&i:s){
            if(i=='1') o++;
            else z++;
       } 
       int mini=min(z,o);

       if(mini%2) cout<<"DA"<<endi;
       else cout<<"NET"<<endi;
    }
}
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
        int ans=0;
        int n;cin>>n;
        string s;cin>>s;
        
        vector<int> left(26);
        vector<int> right(26);
        int countl=0,countr=0;

        for(auto&i:s) right[i-'a']++;
        for(auto&i:right) if(i>0) countr++;

        for(auto&i:s){
            if(left[i-'a']==0) countl++;
            if(right[i-'a']==1) countr--;

            ans=max(ans,countl+countr);

            left[i-'a']++;
            right[i-'a']--;
        }

        cout<<ans<<endi;
    }
}
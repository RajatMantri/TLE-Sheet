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
        ll n;
        cin>>n;

        vector<int> dig;
        while(n){
            dig.push_back(n%10);
            n=n/10;
        }

        int ans=INT_MAX;
        
        for(int i=0;i<dig.size();i++){
            for(int j=i+1;j<dig.size();j++){
                if(dig[i]==5&&(dig[j]==7||dig[j]==2)) ans=min(ans,j-1);
                if(dig[i]==0&&(dig[j]==5||dig[j]==0)) ans=min(ans,j-1);
            }
        }
        
        cout<<ans<<endi;
    }
}
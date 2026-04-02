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
        map<int,int> freq;

        int maxFreq=0;

        for(int i=0;i<n;i++){
            int x;cin>>x;
            freq[x]++;

            maxFreq=max(maxFreq,freq[x]);
        }

        ll ans=n-maxFreq;
        ll count=0;
        ll add=maxFreq;
        
        while(count<n-maxFreq){
            ans++;
            count+=add;
            add*=2;
        }

        cout<<ans<<endi;
    }
}
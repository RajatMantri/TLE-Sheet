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
        int n;char c;
        cin>>n>>c;

        string s;
        cin>>s;

        s=s+s;

        int ans=0;

        int i=0;
        while(i<n&&c!='g'){
            while(i<n&&s[i]!=c) i++;
            if(i>=n) break;
            int j=i;
            while(j<2*n&&s[j]!='g') j++;
            ans=max(ans,j-i);
            i=j;
        }

        cout<<ans<<endi;
    }
}
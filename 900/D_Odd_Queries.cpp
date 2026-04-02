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
        int n,q;
        cin>>n>>q;

        vector<int> arr(n);
        vector<ll> prefix;
        prefix.push_back(0);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=(ll)arr[i];
            prefix.push_back(sum);
        }

        vector<string> ans;
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            l--;r--;

            ll s=prefix[r+1]-prefix[l];
            ll rem=sum-s;
            ll new_s=rem+k*(r-l+1);

            if(new_s&1) ans.push_back("YES");
            else ans.push_back("NO");
        }

        for(int i=0;i<ans.size();i++) cout<<ans[i]<<endi;
    }
}
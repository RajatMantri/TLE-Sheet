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

        vector<int> a(n);
        vector<int> b(n);

        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        unordered_map<int,int> freqa;
        int ans=0;

        int i=0;
        while(i<n){
            int j=i;
            while(j<n&&a[i]==a[j]) j++;
            freqa[a[i]]=max(freqa[a[i]],j-i);
            ans=max(freqa[a[i]],ans);
            i=j;
        }

        i=0;
        while(i<n){
            int j=i;
            while(j<n&&b[i]==b[j]) j++;
            ans=max(ans,j-i+freqa[b[i]]);
            i=j;
        }

        cout<<ans<<endi;
    }
}
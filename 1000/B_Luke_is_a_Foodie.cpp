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
        int n,x;
        cin>>n>>x;

        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int count=0;
        int mini=INT_MIN,maxi=INT_MAX;
        for(int i=0;i<n;i++){
            int l=a[i]-x,r=a[i]+x;
            if(maxi<l||mini>r){
                count++;
                maxi=r,mini=l;
            }
            else{
                maxi=min(r,maxi);
                mini=max(l,mini);
            }
        }

        cout<<count<<endi;
    }
}
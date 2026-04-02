#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9 + 7;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

//rbegin()
bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.second<b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i+1;
        }

        sort(a.begin(),a.end());
        ll ans=0;int x=1,y=-1;
        int t=1;
        for(int i=n-1;i>=0;i--){
            if(t){
                ans+=2*1LL*x*a[i].first;
                a[i].first=x;
                x++;
            }
            else{
                ans+=-2*1LL*y*a[i].first;
                a[i].first=y;
                y--;
            }
            t=t^1;
        }

        sort(a.begin(),a.end(),cmp);
        cout<<ans<<endi;
        cout<<0<<" ";

        for(auto&i:a) cout<<i.first<<" ";
        cout<<endi;
    }
}
#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9 + 7;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

bool cmp(vector<int>&a,vector<int>&b){
    if(a[1]!=b[1]) return a[1]>b[1];
    else return a[0]>b[0];
}

//rbegin()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int>> p;
        for(int i=0;i<n;i++){
            int k;cin>>k;
            vector<int> temp;
            for(int j=0;j<k;j++){
                int x;cin>>x;
                temp.push_back(x);
            }
            sort(temp.begin(),temp.end());
            p.push_back(temp);
        }
        sort(p.begin(),p.end(),cmp);

        ll ans=0;
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++){
            ans+=p[i][1];
            mini=min(p[i][0],mini);
        }
        mini=min(mini,p[n-1][0]);
        cout<<ans+mini<<endi;
    }
}
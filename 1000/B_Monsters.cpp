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
        int n,k;
        cin>>n>>k;

        vector<pair<int,int>> q;

        int idx=1;
        while(idx<=n){
            int x;cin>>x;
            if(x%k!=0) x=x%k;
            else x=k;
            q.push_back({x,-1*idx});
            idx++;
        }
        
        sort(q.begin(),q.end());

        for(int i=n-1;i>=0;i--){
            cout<<-1*q[i].second<<" ";
        }
        cout<<endi;
    }
}
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
        int n,b,r;
        cin>>n>>r>>b;

        int div=r/(b+1);
        int m=r%(b+1);

        string R;
        for(int i=0;i<div;i++) R.push_back('R');

        while(m>0&&b>0){
            cout<<R<<"RB";
            m--;b--;
            r-=div+1;
        }

        while(b>0){
            cout<<R<<"B";
            b--;
            r-=div;
        }

        while(r>0){
            cout<<"R";r--;
        }
        
        cout<<endi;
    }
}
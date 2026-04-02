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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;

        if(s/k==b){
            for(int i=0;i<n-1;i++) cout<<0<<" ";
            cout<<s<<endi;
            continue;
        }

        if(s/k<b||s>k*b+(k-1)*n){
            cout<<-1<<endi;
            continue;
        }
        
        for(int i=0;i<n-1;i++){
            if(s>b*k+k-1){
                cout<<k-1<<" ";
                s-=k-1;
            }
            else cout<<"0 ";
        }
        cout<<s<<endi;

    }
}
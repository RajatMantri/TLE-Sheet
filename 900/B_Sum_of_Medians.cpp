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
        vector<int> a(n*k);
        for(int i=0;i<n*k;i++) cin>>a[i];

        int f=n-(n+1)/2+1;
        ll sum=0;
        int count=k;

        for(int i=n*k-f;count>0;i-=f){
            sum+=a[i];
            count--;
        }

        cout<<sum<<endi;
    }
}
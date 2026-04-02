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
        ll sum=0;
        ll maxi=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            maxi=maxi+(x-1+a[i])/x;
        }

        cout<<(sum+x-1)/x<<" "<<maxi<<endi;
    }
}
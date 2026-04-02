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
        vector<int> a(n);

        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.begin(),a.end());

        int maxi=1;

        int i=1;
        while(i<n){
            int start=i;
            while(i<n&&a[i]-a[i-1]<=k) i++;
            maxi=max(maxi,i-start+1);
            i++;
        }

        cout<<n-maxi<<endi;
    }
}
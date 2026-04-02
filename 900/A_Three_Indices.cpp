#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9 + 7;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);

        for(int i=0;i<n;i++) cin>>a[i];

        int x=n;
        int i=0,j=n-1;
        while(j-i>=2){
            if(a[i]==x){
                i++;
                x--;
            }
            else if(a[j]==x){
                j--;
                x--;
            }
            else{
                break;
            }
        }

        if(i==j-1) cout<<"NO"<<endi;
        else{
            cout<<"YES"<<endi;
            int idx=0;
            while(idx<n&&a[idx]!=x) idx++;
            cout<<i+1<<" "<<idx+1<<" "<<j+1<<endi;
        }
    }
}
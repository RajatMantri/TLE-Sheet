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
        int n;
        cin>>n;

        vector<int> a(n);
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;){
            if(a[i]!=0) i++;
            else{
                while(i<n&&a[i]==0) i++;
                count++;
            }
        }

        int ans=count+1;
        if(a[0]==0) ans--;
        if(a[n-1]==0) ans--;

        cout<<min(ans,2)<<endi;
        
    }
}
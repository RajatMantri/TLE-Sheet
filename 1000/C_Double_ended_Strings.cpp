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
        string a,b;
        cin>>a>>b;

        int n=a.length(),m=b.length();
        int ans=0;

        for(int i=0;i<n;i++){
            for(int q=0;q<m;q++){
                int j=q;
                while(j<m){
                    int k=i,count=0;
                    while(j<m&&a[k]!=b[j]) j++;
                    while(j<m&&a[k]==b[j]){
                        count++;
                        j++;k++;
                    }
                    ans=max(ans,count);
                }
            }
        }

        cout<<m+n-2*ans<<endi;
    }
}
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
        vector<int> a(n+1);
        bool fl=1;

        for(int i=1;i<n+1;i++){
            cin>>a[i];
        }

        int i=1;
        while(i<=n){
            int j=i;
            while(j<=n&&a[j]==a[i]) j++;
            if(j-i==1){
                fl=0;break;
            }
            i=j;
        }

        if(!fl) cout<<-1<<endi;
        else{
            int i=1;
            while(i<=n){
                int j=i;
                while(j<=n&&a[j]==a[i]) j++;
            
                cout<<j-1<<" ";
                for(int g=i;g<=j-2;g++) cout<<g<<" ";
                i=j;
            }
            cout<<endi;
        }
    }
}
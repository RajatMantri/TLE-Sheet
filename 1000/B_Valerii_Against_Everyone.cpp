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
        vector<int> a (n);
        for(int i=0;i<n;i++) cin>>a[i];

        string f="NO";

        sort(a.begin(),a.end());
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                f="YES";
                break;
            }
        }

        cout<<f<<endi;
    }
}
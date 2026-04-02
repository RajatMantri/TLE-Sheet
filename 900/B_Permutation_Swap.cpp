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

        vector<int> a;

        for(int i=1;i<=n;i++){
            int x;cin>>x;
            if(x!=i) a.push_back(abs(x-i));
        }

        int mini=a[0];

        for(int i=1;i<a.size();i++){
           mini=__gcd(mini,a[i]);
        }

        cout<<mini<<endi;
    }
}
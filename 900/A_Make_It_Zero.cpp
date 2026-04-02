#include<bits/stdc++.h>
using namespace std;
#define end "\n"
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
        for(int i=1;i<=n;i++){
            int x;cin>>x;
        }
        if(n&1){
            cout<<4<<end;
            cout<<1<<" "<<n-1<<end;
            cout<<1<<" "<<n-1<<end;
            cout<<n-1<<" "<<n<<end;
            cout<<n-1<<" "<<n<<end;
        }
        else{
            cout<<2<<end;
            cout<<1<<" "<<n<<end;
            cout<<1<<" "<<n<<end;
        }
    }
}
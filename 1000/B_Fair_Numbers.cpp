#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
typedef long long ll; 
const ll mod = 1e9 + 7;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

//rbegin()
bool f(ll n){
    ll k=n;
    while(n){
        int dig=n%10;
        if(dig>1&&k%dig!=0) return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        while(true){
            if(f(n)) break;
            n++;
        }

        cout<<n<<endi;
    }
}
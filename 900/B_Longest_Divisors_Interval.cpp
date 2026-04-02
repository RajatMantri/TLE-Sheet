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
       ll n;
       cin>>n;

       if(n&1) cout<<1<<end;
       else{
            int count=2;
            for(int i=3;;i++){
                if(n%i!=0) break;
                count++;
            }
            cout<<count<<end;
       } 
    }
}
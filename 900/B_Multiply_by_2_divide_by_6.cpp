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
        int n;cin>>n;
        int factor3=0,factor2=0;
        while(n){
            if(n%2==0){
                n=n/2;
                factor2++;
            }
            else break;
        }
        while(n){
            if(n%3==0){
                n=n/3;
                factor3++;
            }
            else break;
        }
        if(n!=1||factor2>factor3) cout<<-1<<endi;
        else cout<<2*factor3-factor2<<endi;
    }
}
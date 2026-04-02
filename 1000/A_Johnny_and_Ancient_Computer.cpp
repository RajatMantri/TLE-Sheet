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
        ll a,b;
        cin>>a>>b;

        ll count=0;

        while(a!=b){
            if(a<b){
                if(8*a<=b) a=a*8;
                else if(4*a<=b) a=a*4;
                else a=a*2;
            }
            else{
                if(a/8>=b&&a%8==0) a=a/8;
                else if(a/4>=b&&a%4==0) a=a/4;
                else if(a/2>=b&&a%2==0) a=a/2;
                else{
                    count=-1;
                    break;
                }
            }
            count++;
        }  

        cout<<count<<endi;
    }
}
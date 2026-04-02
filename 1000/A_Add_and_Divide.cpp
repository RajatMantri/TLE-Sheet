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
        int a,b;
        cin>>a>>b;
        
        int op=0;
        if(b==1){
            op++;b++;
        }

        int x=a;
        int count=0;
        while(x){
            count++;
            x=x/b;
        }
        int ans=count+op;
        

        for(int i=0;i<5;i++){
            op++;x=a;
            count=0;b++;
            while(x){
                count++;
                x=x/b;
            }
            ans=min(ans,op+count);
        }

        cout<<ans<<endi;

    }
}
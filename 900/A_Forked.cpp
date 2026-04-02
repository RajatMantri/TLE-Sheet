#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9 + 7;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

//rbegin()
int f(int a,int b,int x1,int y1,int x2,int y2){
    vector<int> dir_x={a,a,-a,-a,b,b,-b,-b};
    vector<int> dir_y={b,-b,b,-b,a,-a,a,-a};

    int count=0;
    for(int i=0;i<8;i++){
        int possx=dir_x[i]+x1;
        int possy=dir_y[i]+y1;

        for(int i=0;i<8;i++){
            int x=possx+dir_x[i];
            int y=possy+dir_y[i];

            if(x==x2&&y==y2) count++;
        }
    }

    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,m,n,o,p;
        cin>>a>>b>>m>>n>>o>>p;
        int ans=0;
        
        ans=f(a,b,m,n,o,p);
        if(a==b) ans/=4;

        cout<<ans<<endi;
    }
}
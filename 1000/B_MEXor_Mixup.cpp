#include<bits/stdc++.h>
using namespace std;
#define endi "\n"

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        int xr=0;

        for(int i=a-a%4;i<a;i++){
            xr^=i;
        }
        
        if(xr==b) cout<<a<<endi;
        else{
            if((b^xr)!=a) cout<<a+1<<endi;
            else cout<<a+2<<endi;
        }
    }
}
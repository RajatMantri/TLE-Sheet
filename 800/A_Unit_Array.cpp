#include<bits/stdc++.h>
#define ll long long
#define mod (int)(1e9+7) 

using namespace std;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        int neg=0;
        int pos=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x==-1) neg++;
            else pos++;
        }
        int ans=0;
        
        if(neg>pos){
            int ch=(neg-pos+1)/2;
            neg-=ch;
            if(neg&1) ans=ch+1;
            else ans=ch;
        }
        else if(neg%2!=0){
            ans++;
        }

        cout<<ans<<endl;
    }
}
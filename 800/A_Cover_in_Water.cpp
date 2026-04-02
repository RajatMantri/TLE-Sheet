#include<bits/stdc++.h>
#define ll long long
using namespace std;
const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;

        int i=0;
        int ans=0;
        
        while(i<n){
            while(s[i]=='#') i++;
            int start=i;
            while(s[i]=='.') i++;
            if(i-start>=3){
                ans=2;break;
            }
            else ans+=(i-start);
        }
        
        cout<<ans<<endl;
    }
}
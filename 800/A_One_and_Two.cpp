#include<bits/stdc++.h>
#define ll long long
#define mod (int)(1e9+7) 

using namespace std;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> ans;
        for(int i=1;i<=n;i++){
            int x;cin>>x;
            if(x==2) ans.push_back(i);
        }
        if(ans.empty()) cout<<1<<endl;
        else if(ans.size()&1) cout<<-1<<endl;
        else cout<<ans[ans.size()/2-1]<<endl;
    }
}
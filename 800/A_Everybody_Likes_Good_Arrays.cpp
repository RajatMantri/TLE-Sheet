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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int ans=0;
        for(int i=0;i<n;){
            //odd
            int start=i;
            if(a[i]&1){
                while(i<n&&(a[i]&1)) i++;
                ans+=i-start-1;
            }
            else{
                while(i<n&&!(a[i]&1)) i++;
                ans+=i-start-1;
            }
        }
        cout<<ans<<endl;
    }
}
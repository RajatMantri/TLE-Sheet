#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
typedef long long ll;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

//rbegin()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>> a(n,vector<int>(m));
        int mini=INT_MAX;
        int sum=0,zero=0,neg=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                mini=min(mini,abs(a[i][j]));
                if(a[i][j]==0) zero++;
                if(a[i][j]<0) neg++;
                sum+=abs(a[i][j]);
            }
        }

        if(zero) cout<<sum<<endi;
        else{
            if(neg&1) cout<<sum-2*mini<<endi;
            else cout<<sum<<endi;
        }
    }
}
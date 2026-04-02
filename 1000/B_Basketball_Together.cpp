#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
const int mod = 1e9 + 7;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int solve(vector<int>&a,int maxi){
    int n=a.size();
    int count=0;
    int i=n-1;

    while(i>=0&&n>0){
        n-=maxi/a[i]+1;
        if(n>=0) count++;
        i--;
    }

    return count;
}


int main(){
    int n,d;
    cin>>n>>d;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());

    int ans=solve(a,d);

    cout<<ans<<endi;
}
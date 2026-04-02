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
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        int two=0,min_three=2,min_five=4,min_four=3;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%4==0) two+=2;
            else if(a[i]%2==0) two++;

            if(a[i]%3==0) min_three=0;
            if(a[i]%5==0) min_five=0;
            if(a[i]%4==0) min_four=0;

            min_three=min(min_three,3-a[i]%3);
            min_five=min(min_five,5-a[i]%5);
            min_four=min(min_four,4-a[i]%4);
        }

        if(k==2){
            if(two) cout<<0<<endi;
            else cout<<1<<endi;
        }
        if(k==3) cout<<min_three<<endi;
        if(k==5) cout<<min_five<<endi;
        if(k==4){
            if(two>=2) cout<<0<<endi;
            else if(two==1) cout<<1<<endi;
            else cout<<min(min_four,2)<<endi;
        }
    }
}
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
        int n;
        cin>>n;
        string s;
        cin>>s;

        int maxi=0;

        for(int i=0;i<n;){
            char ch=s[i];

            int strt=i;
            while(i<n&&s[i]==ch) i++;

            maxi=max(maxi,i-strt);
        }

        cout<<maxi+1<<endi;
    }
}
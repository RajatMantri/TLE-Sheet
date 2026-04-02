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
        string big,small;
        cin>>big>>small;

        string s;

        vector<int> freq(26);
        for(auto& i:small) freq[i-'A']++;

        
        for(int i=big.length()-1;i>=0;i--){
            if(freq[big[i]-'A']>0){
                s.push_back(big[i]);
                freq[big[i]-'A']--;
            }
        }


        reverse(s.begin(),s.end());
        if(s==small) cout<<"YES"<<endi;
        else cout<<"NO"<<endi;
    }
}
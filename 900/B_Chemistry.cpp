#include<bits/stdc++.h>
using namespace std;
#define end "\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9 + 7;
const int MAX=(int)1e5+1;

// ll ncr(int n, int r){
//     long long p = 1, k = 1;

//     if(r>n) return 0;

//     if (n - r < r)
//         r = n - r;
 
//     if (r != 0) {
//         while (r) {
//             p *= n;
//             k *= r;
//             long long m = __gcd(p, k);

//             p /= m;
//             k /= m;
 
//             n--;
//             r--;
//         }
//     }
//     else p = 1;
    
//     return p;
// }


// ll binpow(ll a, ll b){
//     ll res = 1;
//     while(b > 0){
//         if(b & 1){
//             res = (res*1LL*a)%mod;
//         }
//         a = (a*1LL*a)%mod;
//         b >>= 1;
//     }
//     return res;
// }


// ll hash(string const& s) {
//     const ll p = 31;
//     const ll m = 1e9 + 9;
//     ll hash_value = 0;
//     ll p_pow = 1;
//     for (char c : s) {
//         hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
//         p_pow = (p_pow * p) % m;
//     }
//     return hash_value;
// }


// class TrieNode{
// public:
//     unordered_map<int,TrieNode*> child;
//     int count;

//     TrieNode(){
//         count=0;
//     }
// };
// class Solution {
// public: 
//     TrieNode* root;
//     Solution(){
//         root=new TrieNode();
//     }
//     long long countPrefixSuffixPairs(vector<string>& words) {
//         long long ans=0;
//         for(auto&s:words){
//             int n=s.length();
//             TrieNode* curr=root;
//             for(int i=0;i<n;i++){
//                 int hash=128*s[i]+s[n-1-i];
//                 if(curr->child[hash]==NULL) curr->child[hash]=new TrieNode();
//                 curr=curr->child[hash];
//                 ans+=curr->count;
//             }
//             curr->count++;
//         }
//         return ans;
//     }
// };



// bool prime[MAX];
// int spf[MAX];//Smallest prime factor of the number
// void sieve(){
//     for(int i=0;i<MAX;i++){
//         spf[i]=i;
//         prime[i]=1;
//     }
//     prime[0]=prime[1]=0;
//     long long i=2;
//     while(i*i<MAX){
//         if(prime[i]){
//             for(long long j=i*i;j<MAX;j+=i){
//                 if(spf[j]==j) spf[j]=i;
//                 prime[j]=0;
//             }
//         }
//         i++;
//     }
// }
// vector<int> getPrimeFactors(int n){
//     unordered_map<int,int>  freq;//primefactors freq in that number
//     while(n!=1){
//         freq[spf[n]]++;
//         n=n/spf[n];
//     }
//     vector<int> ans;
//     for(auto &i:freq) ans.push_back(i.first);
//     return ans;
// }
// // vector<bool> segemented_sieve(long long L, long long R){
// //     vector<bool> primes=sieve(sqrt(R));
// //     vector<bool> isPrime(R-L+1,true);
// //     for (long long i=2;i*i<=R;i++){
// //         if(primes[i]==0) continue;
// //         for (long long j=max(i*i,(L+i-1)/i*i);j<=R;j+=i){
// //             isPrime[j-L]=0;
// //         }
// //     }
// //     if (L==1) isPrime[0]=0;
// //     return isPrime;
// // }


// vector <int> kmp(string &pat, string &txt){   
//     vector<int> ans;
//     int n=txt.length(),m=pat.length(),length=0,i=1;
//     vector<int> lps(m);
//     while(i<m){
//         if(pat[i]==pat[length]){
//             length++;lps[i]=length;i++;
//         }
//         else{
//             if(length!=0) length=lps[length-1];
//             else{
//                 lps[i]=0;i++;
//             }
//         }
//     }
//     int j=0;i=0;
//     while(i<n){
//         if(pat[j]==txt[i]){
//             i++;j++;
//             if(j==m) ans.push_back(i-j+1);
//         }
//         else{
//             if(j!=0) j=lps[j-1];
//             else i++;
//         }
//     }
//     return ans;
// }


// class DisjointSet{
//     public:
//         vector<int> parent,size;
//         DisjointSet(int n){
//             parent.resize(n+1);
//             size.resize(n+1,1);
//             for(int i=0;i<=n;i++){
//                 parent[i]=i;
//             }
//         }
//         int find_U_parent(int node){
//             if(node==parent[node]) return node;
//             parent[node]=find_U_parent(parent[node]);
//             return parent[node];
//         }
//         void reset(int n){
//             parent[n]=n;
//             size[n]=1;
//         }
//         void unionBySize(int u,int v){
//             int Ult_u=find_U_parent(u);
//             int Ult_v=find_U_parent(v);
//             if(Ult_u==Ult_v) return;
//             if(size[Ult_u]>size[Ult_v]){
//                 parent[Ult_v]=Ult_u;
//                 size[Ult_u]+=size[Ult_v];
//             }
//             else{
//                 parent[Ult_u]=Ult_v;
//                 size[Ult_v]+=size[Ult_u];
//             }
//         }  
// };


// int countbits(int n){
//     int count=0;
//     while(n){
//         count++;
//         n=n>>1;
//     }
//     return count;
// }
// void countSetBits(int n,vector<int> &bit){
//     if(n==0) return;

//     int bits=countbits(n);
//     bits--;
//     int pow=1<<bits;

//     for(int i=0;i<bits;i++){
//         bit[i]+=pow/2;
//     }

//     bit[bits]+=n-pow+1;
//     countSetBits(n-pow,bit);
// }

//custom comparator priority queue
// class Compare {
//     public:
//        bool operator()(T a, T b){
//            if(cond){
//                return true;
//            }
//            return false;
//       }
// };

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

//rbegin()
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> freq(26,0);
        for(int i=0;i<n;i++) freq[s[i]-'a']++;
        
        int odd=0;
        for(int i=0;i<26;i++){
            if(freq[i]&1) odd++;
        }

        if(odd<=k+1) cout<<"YES"<<end;
        else cout<<"NO"<<end;
    }
}
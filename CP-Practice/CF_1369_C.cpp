/* Author: Newbie Abhishek Pandey */
                                       
#include<bits/stdc++.h>
#define Abhi_921 ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define ld long double
#define fi(i,j,n) for(int i=j;i<n;i++)
#define fd(i,j,n) for(int i=j;i>n;i--)
#define print(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define inp(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define printe(v) for(auto &i:v){cout<<i<<' ';}cout<<endl;
#define deb(n1) cout<<n1<<endl;
#define pb push_back
#define eb emplace_back
#define vi vector<ll>
#define vll vector<pair<ll,ll>>
#define umap unordered_map<ll,ll>
using namespace std;
const long long mod=1e9+7;
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
Abhi_921;
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
ll a[n]={};
fi(i,0,n) cin>>a[i];
ll w[k]={};
fi(i,0,k) cin>>w[i];
sort(a,a+n);
sort(w,w+k);
ll ans=0;

  ll pt=n-k;
    fi(i,0,k){
         ans+=a[n-1-i];
        if(w[i]==1) ans+=a[n-1-i];
        if(w[i]>1){
            fi(j,0,w[i]-1) pt--;
            ans+=a[pt];
        }
    }
    cout<<ans<<endl;
}
return 0;
}

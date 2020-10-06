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
vector<int> a[100005];
int vis[100005];
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
double dfs(int i){
    double sum = 0;
    int cnt = 0;

    if(!vis[i]) vis[i] = 1;
    
    for(auto &child : a[i]){
       if(!vis[child]){
           sum+=1;
           cnt++;
           dfs(child);
       }
    }
    if(cnt) sum/=cnt;
    return sum+1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
Abhi_921;
int t;
t=1;
while(t--){
    int n;
    cin>>n;
    fi(i,0,n){
     int u,v;
     cin>>u>>v;
     a[u].pb(v);
     a[v].pb(u);
    }     
   double tot_exp_value = dfs(1);
   //tot_exp_value/= n-2;
   cout << setprecision(10) << fixed << tot_exp_value <<endl;
}
return 0;
}

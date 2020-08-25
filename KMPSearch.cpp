/*....
     
 "Be not afraid of GROWING slowly, be afraid only of STANDING Still"
                                                                     
....*/
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

void lpsarr(string phone,int n,int *lps){
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<n){
        if(phone[i]==phone[len]){
         len++;
        lps[i]=len;
        i++;
        }
        else{
            if(len!=0) len=lps[len-1];
             else {
                 lps[i]=0;
                 i++;
             }
    }
}
//print(lps,n);
}

set<int> kmpsearch(string ai,string phone){
  int m=ai.length();
  int n=phone.length();
  int lps[n];
  set<int> st;
  lpsarr(phone,n,lps);
    int i=0;
    int j=0;
    while(i<m){
    if(phone[j]==ai[i]){
        j++;
        i++;
    }
    if(j==n){
         st.insert((i-j));
        j=lps[j-1];
    }
    else if(i<m && phone[j]!=ai[i]){
        //cout<<j<<endl;
        if(j!=0) j=lps[j-1];
        else i=i+1; 
    }
    }
    //cout<<n<<endl;
return st;
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
string ai,phone;
cin>>ai>>phone;
set<int> st;
st=kmpsearch(ai,phone);
cout<<st.size()<<endl;
}
return 0;
}
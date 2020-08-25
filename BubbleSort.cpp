#include<bits/stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define ld long double
#define fi(i,j,n) for(int i=j;i<n;i++)
#define fd(i,j,n) for(int i=j;i>n;i--)
#define debug(n1) cout<<n1<<endl;
#define pb push_back
#define eb emplace_back
#define vi vector<int>
#define mod 1e9+7
using namespace std;
void BubbleSort(int a[],int n){       //Bubble sort
    for(int i=0;i<n-1;i++){          //Best Case=O(n)    Worst Case=O(n^2)
        int flg=0;                   //Adaptive
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]) {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                flg=1;
            }
        }
        if(flg==0) break;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
SPEED;
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n]={};
fi(i,0,n) cin>>a[i];
BubbleSort(a,n);
fi(i,0,n) cout<<a[i]<<" ";
}
return 0;
}
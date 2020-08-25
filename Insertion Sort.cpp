//Insertion Sort
void InsertionSort(int a[],int n){
    for(int i=1;i<n;i++){
       int j=i-1;
       int x=a[i];               //Insertion Sort
                                 //Best Case=O(1)    Worst Case=O(n^2)
       while(j!=-1 && a[j]<x){
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=x;
    }
}
int main(){
int n;
cin>>n;
int a[n]={};
fi(i,0,n) cin>>a[i];
InsertionSort(a,n);
fi(i,0,n) cout<<a[i]<<" ";
return 0;
}

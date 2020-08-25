//Bubble Sort

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
int n;
cin>>n;
int a[n]={};
fi(i,0,n) cin>>a[i];
BubbleSort(a,n);
fi(i,0,n) cout<<a[i]<<" ";
return 0;
}

#include<iostream>
using namespace std;
class sort{
    private:
    void merge(int *arr,int l,int mid,int r){
        int i=l;
        int j=mid+1;
        int k=l;
        int *b=new int[r];
        while(i<=mid && j<=r){
            if(arr[i]<arr[j]){
                b[k]=arr[i];
                i++;

            }
            else{
                b[k]=arr[j];
                j++;
            }
            k++;
            
        }
        if(i>mid){
            while(j<=r){
                b[k]=arr[j];
                k++;j++;
            }

        }
        else{
            while(i<=mid){
                b[k]=arr[i];
                k++;i++;
            }
           
        }

        for(int k=l;k<=r;k++){
            arr[k]=b[k];
        }


    }
    public:
    void mergeSort(int *arr,int l,int r){
        if (l<r){
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
    
};

int main(){
    int n;
    cout<<"Enter the size of your list"<<endl;
    cin>>n;

    int *arr=new int[n];
    cout<<"Enter values of your list "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort s1;
    s1.mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

}

#include<iostream>
using namespace std;
class sort{
    private:
    int partition(int *arr,int l,int r){
        int piv=arr[l];
        int i=l;
        int j=r;
        while(i<j){
            do{
                i++;
            }
            while(arr[i]<=piv);
            do{
                j--;
            }
            while(arr[j]>piv);
            if(i<j){
                swap(arr[i],arr[j]);
            }


        }
        swap(arr[l],arr[j]);
        return j;
    }
    
    public:
    void quick(int *arr,int l,int r){
        if(l<r){
        int j=partition(arr,l,r);
        quick(arr,l,j);
        quick(arr,j+1,r);
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
    s1.quick(arr,0,n);
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

}

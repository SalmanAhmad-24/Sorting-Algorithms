#include<iostream>
using namespace std;
class sort{
    public:
   void insertion(int *arr,int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&& arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        
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
    s1.insertion(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

}
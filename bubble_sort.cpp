#include<iostream>
using namespace std;
class sort{
    public:
   void bubble(int *arr,int size){
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
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
    s1.bubble(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

}

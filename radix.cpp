#include<iostream>
using namespace std;
class sort{

     void count_sort(int *arr,int n,int place){
        //int k=getmaxy(arr,n,place);
        //cout << "max: " << k << endl;
        int *b=new int [n];
        int max=0;
        for(int i=0;i<n;i++){
            if(((arr[i]/place)%10)>max){
                max=((arr[i]/place)%10);
            }
        }
        
        max++;
 
        int *count=new int[max];

        for(int i=0;i<max;i++){
            count[i]=0;
        }
        for(int i=0;i<n;i++){
            count[((arr[i]/place)%10)]++;
        }


        for(int i=1;i<=max;i++){
            count[i]=count[i]+count[i-1];
        }


        for(int i=n-1;i>=0;i--){
            // b[count[((arr[i]/place)%10)]-1]=arr[i];
            // count[((arr[i]/place)%10)]--;
            b[--count[((arr[i]/place)%10)]]=arr[i];
        }


        for(int i=0;i<n;i++){
            arr[i]=b[i];            
        }
    }

   
  
    
    public:
    void radix(int *arr,int n){
        int max=0;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];

            }
            for(int place=1;max/place>0;place*=10){
                count_sort(arr,n,place);
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
    s1.radix(arr,n);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}
#include<iostream>
using namespace std;
int leetTwice(int arr[],int a)
{   
    int z;
    for(int i=0;i<a;i++){
        z=arr[i];
        for(int j=i+1;j<a;j++){
            if(z==arr[j]){
                printf("%d",z);
                return ;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int a;
    cin>>a;
    int arr[a];
    cout<<"Enter teh elements"<<endl;
    
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    leetTwice(arr,a);
    return 0;
}

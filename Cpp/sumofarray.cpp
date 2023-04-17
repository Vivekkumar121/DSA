#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    int arr[a];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to search : ";
    cin>>b;
     for(int i=0;i<5;i++){
        if(arr[i]==b){
            cout<<"The element is presnt in array at index "<<i<<endl;
            break;
        }
       
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"the sum of array is "<<sum;
    return 0;

}
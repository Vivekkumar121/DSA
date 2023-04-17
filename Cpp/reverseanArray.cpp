#include <iostream>
#include <string.h>
using namespace std;
void reverse(int arr[],int a){
    int start=0;
    int end=a-1;
    while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
 for(int i=0;i<a;i++){
        cout << arr[i]<< " ";
    }
}
// void printarray(int arr[],int a){
//     for(int i=0;i<a;i++){
//         cout << arr[i];
//     }
// }
using namespace std;
// void reveerse(){

// }
int main(){
int a;
cin>>a;
int arr[a];
cout<<"Enter the elements for array : ";
for(int i=0;i<a;i++){
    cin>>arr[i];   
}
// for(int i=0;i<a;i++){
// // arr[i]==arr[a-1-i];
// cout<<arr[a-1-i]<<" ";
// }
reverse( arr,a);
}
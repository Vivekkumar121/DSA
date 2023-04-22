#include <iostream>
using namespace std;
int main(){                                                                     //find unique number in array in 2n+1
    int a;
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>a;
    int c=2*a+1;
    int arr[c];
    for(int i=0;i<c;i++){
        cin>>arr[i];
    } 

    int z=0;
    for(int i=0;i<c;i++){
        z=z^arr[i];

        }
        cout<<"\n"<<z;
    }

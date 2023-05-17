#include <iostream>
using namespace std;
int squareRoot(int item){
    int begin = 0;
    int end = item;
    int mid = begin + (end - begin)/2;
    int ans = -1;
    while(begin<=end){
        if((mid*mid) == item){
            return mid;
        }
        if((mid*mid) < item){
            ans = mid;
            begin = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = begin + (end - begin)/2;
    }
    return ans;
}
int main(){
    int item;
    cout<<"Enter the number : "<<endl;
    cin>>item;
    int ans = squareRoot(item);
    cout<<"the Square root is : "<<ans;
}
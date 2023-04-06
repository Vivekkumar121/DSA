// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int b,c,d,a,e,w,f,n,g,h,i,j;
    printf("enter base adress : ");
    scanf("%d",&a);
    printf("enter BYTE SIZE : ");
    scanf("%d",&w);
    // printf("enter index number");
    // scanf("%d",&d);
    // int address=b+(c*d);
    // printf("%d",address);
     printf("enter index i : ");
    scanf("%d",&i);
     printf("enter index j : ");
    scanf("%d",&j);
    // int arr[i][j];
    printf("enter row length : ");
    scanf("%d",&b);
     printf("enter column length : ");
    scanf("%d",&n);
    // int arr[b][d];
     printf("enter lower bound of row : ");
    scanf("%d",&e);
     printf("enter lower boud of column : ");
    scanf("%d",&f);
    // c=i-e;
    // d=j-f;
    // g=n*c+f;
    int address=a+w*((i-e)*n + (j-f));
     printf("%d",address);

    return 0;
}
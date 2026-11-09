#include <stdio.h>

int main(){
    int n, j, mid, gap;
    printf("enter your limit: ",n);
    scanf("%d",&n);
    mid = (n+1)/2;
    for(int i = 1; i <= n; i++){
        int x;
        if(i <= mid)
        x=i;
        else
        x= n-i +1;
        gap = 2*(mid - x)+1;
        for(j=1 ; j<= x; j++)
        printf("*");
        for(j = 1;j <= gap; j++)
        printf(" ");
        for(j = 1;j <= x; j++)
        printf("*");
        printf("\n");


    }

    return 0;
}
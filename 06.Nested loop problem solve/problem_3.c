#include<stdio.h>

int main(){
    int n,i,j,num;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        num=i;
        for(j=1;j<=n;j++){
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}


# include<stdio.h>

int main(){
    int m;
    printf("Enter the value of m");
    scanf("%d",&m);

    int ary[m];
    printf("Enter the values of first array");
    for(int i=0;i<m;i++){
        scanf("%d",&ary[i]);
    }
    int k;
    printf("Enter the values of k(k>=m)");
    scanf("%d",&k);
    int newary[k];
    for(int i=0;i<m;i++){
        newary[i]=ary[i];
    }
    for(int i=0;i<k;i++){
        printf("%d\t",newary[i]);
    }
    return 0;
}
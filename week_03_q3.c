# include<stdio.h>

int sum(int *a,int *b);
int main(){
    int x,y;
    printf("Enter the values of x and y");
    scanf("%d %d",&x,&y);
    int k = sum(&x,&y);
    printf("%d",k);
    return 0;
}
int sum(int *a,int *b){
    return *a + *b;
}
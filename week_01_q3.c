# include<stdio.h>

int main(){
    int n,b,rem;
    printf("Enter n");
    scanf("%d",&n);
    int sum=0;

    do{
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }while(n>0);

    printf("sum of digit of number is %d",sum);
    return 0;
}
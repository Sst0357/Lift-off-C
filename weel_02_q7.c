# include<stdio.h>

int main(){
    int n;
    printf("Enter the values of n");
    scanf("%d",&n);
    
    int ary[n];
    printf("Enter your array");
    for(int i=0;i<n;i++){
        scanf("%d",&ary[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ary[i]<0){
                int temp;
                temp=ary[j];
                ary[j]=ary[i];
                ary[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",ary[i]);
    }
    return 0;
}
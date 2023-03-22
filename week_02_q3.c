# include<stdio.h>

void sorting(int ary[],int size);

int main(){
    int m;
    printf("Enter the value of m");
    scanf("%d",&m);

    int ary[m];
    printf("Enter the values of first array");
    for(int i=0;i<m;i++){
        scanf("%d",&ary[i]);
    }
    sorting(ary,m);

    
    return 0;
}
void sorting(int ary[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(ary[i]>ary[j]){
               temp=ary[i];
               ary[i]=ary[j];
               ary[j]= temp;

            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\t",ary[i]);
    }
}
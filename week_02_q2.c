# include<stdio.h>

int main(){
    int m ,n;
    printf("Enter the values of m");
    scanf("%d",&m);

    printf("Enter the values of n");
    scanf("%d",&n);

    int ary1[m],ary2[n];

    printf("Enter the values of first array");
    for(int i=0;i<m;i++){
        scanf("%d",&ary1[i]);
    }

    printf("Enter the values of second array");
    for(int j=0;j<n;j++){
        scanf("%d",&ary2[j]);
    }

    int k=m+n;

   int newary[k];
   for(int i=0;i<m;i++){
        newary[i]=ary1[i];
   }
   for(int i=0;i<n;i++){
       newary[m+i]=ary2[i];
   }

    for(int i=k-1;i>=0;i--){
        printf("%d\t",newary[i]);
    }
    return 0;
}
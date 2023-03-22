# include<stdio.h>

int main(){
    int n;
    printf("enter the size of your array");
    scanf("%d",&n);

    int ary[n];

    printf("Enter your first array");
    for(int i=0;i<n;i++){
        scanf("%d",&ary[i]);
    }

    int k=0,c=0;
    int element,target;
    for(int i=0;i<n;i++){
         target=ary[i];
        for(int j=0;j<n;j++){
            if(target==ary[j]){
                c++;
            }
        }
    }
    if(k<c){
        k=c;
        element=target;
    }
    printf("Maximum occuring interger in your array is %d",element);
    return 0;
}
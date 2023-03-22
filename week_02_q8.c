# include<stdio.h>


int main(){
    char str[100];
    printf("Enter your string");
    scanf("%s",str);
    int c=0,k=0;
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='O' || str[i]=='I' || str[i]=='U'){
            c++;
        }else{
            k++;
        }
       
    }
    
    printf("The no of vowels in the given string is %d\n",c);
    printf("The no of consonents in the string is %d",k);

    return 0;
}
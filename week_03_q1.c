# include<stdio.h>
# include<string.h>

int main(){
    char str[100];
    char ch = 'a';
    printf("Enter your string\n");
    scanf("%s",&str);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            continue;
        }
        printf("%c",str[i]);
    }
    return 0;
}
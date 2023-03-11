# include<stdio.h>

int main(){
    int a,b;
    printf("Enter values of a\n");
    scanf("%d",&a);
    printf("Enter values of b\n");
    scanf("%d",&b);

    int choice;

    printf("Choose any number between 1 and 4\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Sum of a and b is %d ",a + b);
            break;

        case 2:
            printf("Difference of a and b is %d",a - b);
            break;

        case 3:
            printf("Multiplication of a and b is %d",a * b);
            break;

        case 4:
            printf("Division of a and b is %d",a / b);
            break;

        default :
            printf("False case");
            break;


    }
    return 0;
}
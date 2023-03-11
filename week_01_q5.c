# include<stdio.h>

int main(){
    int r;
    float pi = 3.14;

    printf("Enter the radius of the circle");
    scanf("%d",&r);

    printf("Dimeter of circle is %d\n",2*r);
    printf("Area of circle is %f\n",pi*r*r);
    printf("Circumference of circle is %f\n",2*pi*r);
    return 0;
}
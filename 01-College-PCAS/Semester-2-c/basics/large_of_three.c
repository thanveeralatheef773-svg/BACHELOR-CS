/*program to find the largest among three digits using confitional logics*/
#include <stdio.h>
int main(){
int a,b,c;
printf("enter 1st digit:");
scanf("%d",&a);
printf("enter 2nd digit:");
scanf("%d",&b);
printf("enter 3rd digit:");
scanf("%d",&c);
if(a>=b&&a>c){
    printf("the largest digit is %d",a);
} if(b>=a&&b>=c){
printf("the largest digit is %d",b);
} else{
printf("the largest digit is %d",c);
} return 0;
}


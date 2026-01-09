#include<stdio.h>
int main(){
int Num1,Num2,Temp;

printf("Enter first no:   ");
scanf("%d",&Num1);

printf("Enter second no:  ");
scanf("%d",&Num2);

printf("\nNumber Before Swapping\n");
printf("First no:%d Second no:%d \n",Num1,Num2);

if (Num1 == Num2)
{printf("\nBoth Numbers are is same\n");}

else{
Temp = Num1;
Num1 = Num2;
Num2 = Temp;

printf("\nNumber After Swapping\n");
printf("First no:%d Second no:%d",Num1,Num2);
}
    return 0;

}
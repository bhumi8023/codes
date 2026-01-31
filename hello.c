#include<stdio.h>

int main(){
   int number = 356;
   int first,second,third,number1,sum,product;
   first = 356/100;
   printf("first: ");
   scanf('%d',first);
   number1 = 356%100;
   second = 56/10;
   printf("second: ");
   scanf('%d',second);
   third = 356%10;
   printf("third: ");
   scanf('%d',third);
    sum = first+second+third;
    product = first*second*third;
    printf("sum is : ");
    scanf('%d',sum);
    printf("product is: ");
    scanf('%d',product);



   return 0;
}
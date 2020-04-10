#include<stdio.h>  
 int main()    
{    
int x=10, y=5;      
printf("Before swap x=%d y=%d",x,y);    
x=x+y; //x becomes 15
y=x-y; // y becomes 10 I.e. x
x=x-y; // x becomes 5 I.e. y
printf("\nAfter swap x=%d y=%d",x,y);    
return 0;  
}

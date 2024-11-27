#include <stdio.h>

int function(int x){
int rem;
rem=x%10;
x=x/10;
if(rem==0)
{
    return 0;
}
else
{
    return rem+function(x);
}
}
int main() {
    int number;
    printf("\n Enter a number:");
    scanf("%d",&number);
   int sum= function(number);
   printf("%d",sum);
    return 0;
}
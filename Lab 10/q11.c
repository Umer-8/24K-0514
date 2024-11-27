#include <stdio.h>
#define meterstokilometers 1000  
int conversion(float meter) 
{
    static int Count = 0; 
    Count++;
    float kilometers = meter /meterstokilometers;
    printf("%.2f meters is equal to %.2f kilometers.\n", meter, kilometers);
    return Count;
}

int main() {
int n,a;
float meter;
printf("Enter total number of conversions:");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
printf("\nEnter  value %d in meters: ",i);
scanf("%f",&meter);
a=conversion(meter);
}
printf("Function is called %d times",a);
    return 0;
}

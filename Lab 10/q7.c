#include <stdio.h>
#define MAX_TEMPERATURE 50.0
int checkTemperature(float temp) {
static int Count = 0; 
 if (temp > MAX_TEMPERATURE) 
 {
         Count++; 
  return Count;
    }
}

int main() {
    int n,a;
    float temp;
    printf("Enter the number of temperature readings: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
     {
        printf("Enter temperature %d: ", i + 1);
        scanf("%f", &temp);
         a=checkTemperature(temp); 
    }
printf("The temperatures exceeds the maximum temperature %d times",a);
    return 0;
}

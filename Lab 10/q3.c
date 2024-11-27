#include <stdio.h>
#include<string.h>
struct flight
{
    int flight_number;
    char dept_city[50];
    char dest_city[50];
     char date[20];
    int av_seats;
}f;
 void bookseats(struct flight *f)
{
    if(f->av_seats>0)
    {
        printf("\nYour seat has been booked succcessfully!\n");
        f->av_seats--;
    }
    else
    {
         printf("\n Sorry all the seats have been booked!\n");
    }
}
void flightdetails(struct flight f)
{
    printf("Flight number is %d\n",f.flight_number);
    printf("Departure city is %s\n",f.dept_city);
    printf("Destination city is %s\n",f.dest_city);
    printf("Date: %s\n", f.date);
    printf("Available seats are %d \n",f.av_seats);
}
int main() 
{
    f.flight_number=1001;
    strcpy(f.dept_city,"Karachi");
    strcpy(f.dest_city,"Lahore");
    strcpy(f.date,"2024-11-27");
    f.av_seats=15;
    int menu;
    while(1)
    {
    printf("\nPress 1 for booking seat\nPress 2 for  viewing flight details\nPress 3 to exit");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1:
        bookseats(&f);
        break;
        case  2:
        flightdetails(f);
        break;
        case 3:
        printf("Exiting the program!\n");
        return 0;
        default:
        printf("Invalid choice.Please try again!\n");
    }
    }
    return 0;
}
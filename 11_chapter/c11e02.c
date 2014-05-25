/* Choose departure + pointers */

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hour, minutes, departure, arrival;
    
    printf("Enter a 24-hour time (xx:xx): ");
    scanf("%d:%d", &hour, &minutes);

    find_closest_flight((hour*60)+minutes, &departure, &arrival);

    printf("Departure time: %.2d:%.2d, arriving at %.2d:%.2d", departure/60, departure%60, arrival/60, arrival%60);

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if((desired_time >= 2*60) && (desired_time <= 531))
    {
        *departure_time = 8*60; 
        *arrival_time = 10*60+16;
    } 
    else if((desired_time >= 531) && (desired_time < 10*6+31))
    {
        *departure_time = 9*60+43; 
        *arrival_time = 11*60+52;
    } 
    else if((desired_time >= 10*6+31) && (desired_time < 12*6+15))
    {
        *departure_time = 11*60+19; 
        *arrival_time = 13*60+31;
    } 
    else if((desired_time >= 12*6+15) && (desired_time < 13*60+23))
    {
        *departure_time = 12*60+47; 
        *arrival_time = 15*60;
    } 
    else if((desired_time >= 13*60+23) && (desired_time < 14*60+52))
    {
        *departure_time = 14*60; 
        *arrival_time = 16*60+8;
    } 
    else if((desired_time >= 14*60+52) && (desired_time < 16*60+37))
    {
        *departure_time = 15*60+45; 
        *arrival_time = 17*60+55;
    } 
    else if((desired_time >= 16*60+37) && (desired_time < 19*6+52))
    {
        *departure_time = 19*60; 
        *arrival_time = 21*60+20;
    } 
    else if((desired_time < 2*60) || (desired_time >= 19*6+52))
    {
        *departure_time = 21*60+45; 
        *arrival_time = 23*60+58;
    } 
}
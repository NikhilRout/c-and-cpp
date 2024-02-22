#include <stdio.h>

struct TIME {
       int seconds;
       int minutes;
       int hours;
};

struct TIME difference(struct TIME, struct TIME);

int main(){
    struct TIME start, end, diff;
    printf("Enter start time (HH::MM::SS) : \n");
    scanf ("%d%d%d",&start.hours,&start.minutes,&start.seconds);
    printf("Enter end time (HH::MM::SS) : \n");
    scanf ("%d%d%d",&end.hours,&end.minutes,&end.seconds);
    diff = difference(start, end);
    printf("Time difference is : %.2d::%.2d::%.2d",diff.hours,diff.minutes,diff.seconds);
    
    return 0;
}

struct TIME difference(struct TIME start, struct TIME end){
    struct TIME diff;

    if(end.seconds < start.seconds){
        end.minutes--;
        end.seconds += 60;
    }
    diff.seconds = end.seconds - start.seconds;
    
    if(end.minutes < start.minutes){
        end.hours--;
        end.minutes += 60;
    }
    diff.minutes = end.minutes - start.minutes;
    
    diff.hours = end.hours - start.hours;
    return diff;
}
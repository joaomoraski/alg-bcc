#include <stdio.h>


int main(){

    float speed, travelTime, distance; //km

    scanf("%f %f", &travelTime, &speed);

    distance = speed*travelTime;

    printf("%.3f\n", distance/12);

    return 0;

}
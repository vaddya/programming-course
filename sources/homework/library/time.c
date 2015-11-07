#include "time.h"

double halfdistance_time(double * velocity, double * time)
{
    double s = 0;
    int i;
    for (i = 0; i < NUMBER_OF_PIECES ; i++)
        s += velocity[i]*time[i];
    return s/2;
}

double calculating_time(double * velocity, double * time)
{
    double halfdist = halfdistance_time(velocity, time);
    double total_time = 0;
    int i;
    for (i = 0; i < NUMBER_OF_PIECES; i++)
    {
        if (velocity[i]*time[i]<halfdist)
        {
            total_time += time[i];
            halfdist = halfdist - velocity[i]*time[i];
        }
        else
        {
            total_time += halfdist/velocity[i];
            halfdist = 0;
        }
    }
    return total_time;
}

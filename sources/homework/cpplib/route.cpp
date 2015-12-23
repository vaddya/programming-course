#include "route.h"

Route::Route(const double velocity[], const double time[])
{
    this->velocity.reserve(NUMBER_OF_PIECES);
    this->time.reserve(NUMBER_OF_PIECES);
    for(int i = 0; i < NUMBER_OF_PIECES; i++)
    {
        this->velocity[i] = velocity[i];
        this->time[i] = time[i];
    }
}

Route::Route(const vector<double> & velocity, const vector<double> & time): velocity(velocity), time(time) {}

Route::Route(const double v1, const double t1, const double v2, const double t2, const double v3, const double t3)
{
    this->velocity.reserve(NUMBER_OF_PIECES);
    this->time.reserve(NUMBER_OF_PIECES);
    velocity[0] = v1;
    velocity[1] = v2;
    velocity[2] = v3;
    time[0] = t1;
    time[1] = t2;
    time[2] = t3;
}

double Route::distance() const
{
    double s = 0;
    int i;
    for (i = 0; i < NUMBER_OF_PIECES ; i++)
        s += velocity[i]*time[i];
    return s;
}

double Route::time_of_half_way() const
{
    double halfdist = distance()/2;
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

#ifndef ROUTE_H
#define ROUTE_H

/* #1.2: TIME
 * Определить, за какое время путник одолел первую половину пути, двигаясь T1 часов со скоростью V1, T2 часов со скоростью V2, T3 часов со скоростью V3.
 */

class Route
{
private:
    static const int NUMBER_OF_PIECES = 3;
    double * velocity;
    double * time;
public:
    Route(double *, double *);
    Route(double, double, double, double, double, double);
    double distance();
    double time_of_half_way();
    ~Route();
};

#endif // ROUTE_H

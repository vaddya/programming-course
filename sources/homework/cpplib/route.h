#ifndef ROUTE_H
#define ROUTE_H

/* #1.2: TIME
 * Определить, за какое время путник одолел первую половину пути, двигаясь T1 часов со скоростью V1, T2 часов со скоростью V2, T3 часов со скоростью V3.
 */

#include <vector>

using std::vector;

class Route
{
private:
    static const int NUMBER_OF_PIECES = 3;
    vector<double> velocity;
    vector<double> time;
public:
    Route(const double *, const double *);
    Route(const vector<double> &, const vector<double> &);
    Route(const double, const double, const double, const double, const double, const double);
    double distance() const;
    double timeOfHalfWay() const;
};

#endif // ROUTE_H

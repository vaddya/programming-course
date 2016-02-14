#ifndef ROUTE_H
#define ROUTE_H

/* #1.2: TIME
 * Определить, за какое время путник одолел первую половину пути, двигаясь T1 часов со скоростью V1, T2 часов со скоростью V2, T3 часов со скоростью V3.
 */

#include <vector>

using std::vector;
/**
 * @brief Расчет времени, затраченного на первую половину пути
 *
 * Определить, за какое время путник одолел первую половину пути, двигаясь T1 часов со скоростью V1, T2 часов со скоростью V2, T3 часов со скоростью V3.
 */
class Route
{
private:
    static const int NUMBER_OF_PIECES = 3;
    vector<double> velocity;
    vector<double> time;
public:
    /**
     * @brief Конструктор, получающий массивы
     * @param velocity[] массив, содержащий скорости на последовательных участках
     * @param time[] массив, содержащий время движения на последовательных участках
     */
    Route(const double velocity[], const double time[]);
    /**
     * @brief Конструктор, получающий vector
     * @param velocity вектор, содержащий скорости на последовательных участках
     * @param time вектор, содержащий время движения на последовательных участках
     */
    Route(const vector<double> & velocity, const vector<double> & time);
    /**
     * @brief Конструктор, последовательно получающий скорости и время движения
     * @param v1 скорость на первом участке
     * @param t1 время движения на первом участке
     * @param v2 скорость на втором участке
     * @param t2 время движения на втором участке
     * @param v3 скорость на третьем участке
     * @param t3 время движения на третьем участке
     */
    Route(const double v1, const double t1, const double v2, const double t2, const double v3, const double t3);
    /**
     * @brief Рассчитать расстояние движения
     * @return расстояние движения
     */
    double distance() const;
    /**
     * @brief Рассчитать время, затраченное на прохождение половины пути
     * @return время, затраченное на половину пути
     */
    double timeOfHalfWay() const;
};

#endif // ROUTE_H

#ifndef METER_H
#define METER_H
/* #1.1: INCH TO CM
 * Перевести длину отрезка из дюймов в метры, сантиметры и миллиметры.
 */

class Meter
{
private:
    int inches;
    int m;
    int cm;
    double mm;
    void convertInchToCm();
public:
    Meter();
    void fromInches(const int);
    int getInches() const { return inches; }
    int getM() const { return m; }
    int getCm() const { return cm; }
    double getMm() const { return mm; }
};

#endif // METER_H

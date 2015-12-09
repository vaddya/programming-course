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
    void convert_inch_to_cm();
public:
    Meter();
    int get_inches() const;
    int get_m() const;
    int get_cm() const;
    double get_mm() const;
    void from_inches(int);
};

#endif // METER_H

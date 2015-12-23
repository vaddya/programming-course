#include "meter.h"


Meter::Meter()
{
    inches = 0;
    m = 0;
    cm = 0;
    mm = 0;
}

int Meter::get_inches() const
{
    return inches;
}

int Meter::get_m() const
{
    return m;
}

int Meter::get_cm() const
{
    return cm;
}

double Meter::get_mm() const
{
    return mm;
}

void Meter::from_inches(int inches)
{
    this->inches = inches;
    convert_inch_to_cm();
}

void Meter::convert_inch_to_cm()
{
    double total_mm = inches * 25.4;

    m = total_mm / 1000;
    total_mm -= m * 1000;

    cm = total_mm / 10;
    total_mm -= cm * 10;

    mm = total_mm;
}

#include "meter.h"

Meter::Meter(): inches(0), m(0), cm(0), mm(0) {}

void Meter::fromInches(int inches)
{
    this->inches = inches;
    convertInchToCm();
}

void Meter::convertInchToCm()
{
    double total_mm = inches * 25.4;

    m = total_mm / 1000;
    total_mm -= m * 1000;

    cm = total_mm / 10;
    total_mm -= cm * 10;

    mm = total_mm;
}

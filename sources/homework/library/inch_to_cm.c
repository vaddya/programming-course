#include "inch_to_cm.h"

void calculating_inch_to_cm(int inches, Meters * meter)
{
    double total_mm = inches * 25.4;

    meter->m = total_mm / 1000;
    total_mm -= meter->m * 1000;

    meter->cm = total_mm / 10;
    total_mm -= meter->cm * 10;

    meter->mm = total_mm;
}

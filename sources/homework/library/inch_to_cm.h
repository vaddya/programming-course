#ifndef INCH_TO_CM
#define INCH_TO_CM

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    int m;
    int cm;
    double mm;
} Meters;

void calculating_inch_to_cm(int, Meters *);

#ifdef __cplusplus
}
#endif

#endif // INCH_TO_CM

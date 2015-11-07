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
void menu_inch_to_cm();
void input_inch_to_cm();
void calculating_inch_to_cm(int, Meters *);
void show_inch_to_cm(int, Meters);
void automatic_inch_to_cm();
void help_inch_to_cm();

#ifdef __cplusplus
}
#endif

#endif // INCH_TO_CM

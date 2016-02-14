#ifndef METER_H
#define METER_H
/**
  @brief Представление числа в дюймовой и метрической системе

  Перевести длину отрезка из дюймов в метры, сантиметры и миллиметры.
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
    /**
      @brief Конструктор
    */
    Meter();
    /**
     * @brief Перевести из дюймов в метрическую систему
     * @param inches число дюймов
     */
    void fromInches(const int inches);
    /**
     * @brief Получить число дюймов
     * @return число дюймов
     */
    int getInches() const { return inches; }
    /**
     * @brief Получить количество метров
     * @return количество метров
     */
    int getM() const { return m; }
    /**
     * @brief Получить количество сантиметров
     * @return количество сантиметров
     */
    int getCm() const { return cm; }
    /**
     * @brief Получить количество миллиметров
     * @return количество миллиметров
     */
    double getMm() const { return mm; }
};

#endif // METER_H

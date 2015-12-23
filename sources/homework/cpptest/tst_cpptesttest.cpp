#include <QString>
#include <QtTest>
#include "arrayapp.h"
#include "meter.h"
#include "circlegame.h"
#include "number.h"
#include "phrases.h"
#include "route.h"

class CpptestTest : public QObject
{
    Q_OBJECT
private Q_SLOTS:
    void array();
    void meter();
    void route();
    void circle_game();
    void number();
    void phrases();
};

/// Почему ничего не тестируется,
/// сделайте по тесту для каждого паблик метода в классе массив
/// И не забудьте протестировать, как кидается исключение
/// можно это сделать с помощью макроса qverify_exception_thrown или как-то так он называется...
void CpptestTest::array()
{
    ArrayApp array(5);

}

void CpptestTest::meter()
{
    Meter units;
    units.from_inches(301);
    QCOMPARE(units.get_m(), 7);
    QCOMPARE(units.get_cm(), 64);
    QCOMPARE(units.get_mm(), 5.4);
}

void CpptestTest::route()
{
    Route route(50, 1, 100, 1, 150, 1);
    QCOMPARE(route.time_of_half_way(), 2.0);
    double velocity[3] = {60, 80, 100};
    double time[3] = {4, 2, 5};
    Route route2(velocity, time);
    QCOMPARE(route2.time_of_half_way(), 6.5);
}

void CpptestTest::circle_game()
{
    CircleGame game(5, 3);
    QCOMPARE(game.determine_the_winner(), 4);
    game.set_players(32);
    game.set_kicking(5);
    QCOMPARE(game.determine_the_winner(), 13);
}

void CpptestTest::number()
{
    Number number1("15951");
    QCOMPARE(number1.is_palindrome(), true);
    Number number2(15951);
    QCOMPARE(number1.get_num(), number2.get_num());
    Number number3(1234513);
    QCOMPARE(number3.is_palindrome(), false);
}

void CpptestTest::phrases()
{
    string temp = "check.Check check. check. check check. Check.check.";
    Phrases text(temp);
    text.upper_case_phrases();
    temp = "Check.Check check. Check. Check check. Check.Check.";
    QCOMPARE(text.get_str(), temp);
}

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"

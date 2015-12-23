#include "tst_cpptesttest.h"

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

void CpptestTest::array()
{
    Array array1(5);
    QCOMPARE(array1.get_size(), 5);
    array1.set_item(1, 3);
    QCOMPARE(array1[1], 3);

    Array array2(array1);
    QCOMPARE(array2.get_size(), 5);
    QCOMPARE(array2[1], 3);

    QVERIFY_EXCEPTION_THROWN( array2.set_item(1000, 1), std::exception );
    QVERIFY_EXCEPTION_THROWN( Array array3(-2), std::exception );
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

    vector<double> velo(3);
    velo.insert(velo.end(), 60);
    velo.insert(velo.end(), 80);
    velo.insert(velo.end(), 100);
    vector<double> tm(3);
    tm.insert(tm.end(), 4);
    tm.insert(tm.end(), 2);
    tm.insert(tm.end(), 5);
    Route route3(velo, tm);
    QCOMPARE(route3.time_of_half_way(), 6.5);
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

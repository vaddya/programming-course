#include <QString>
#include <QtTest>
#include "time.h"
#include "circle_game.h"
#include "inch_to_cm.h"
#include "palindrome.h"
#include "phrases.h"

class TestTest : public QObject
{
    Q_OBJECT
private Q_SLOTS:
    void test_inch_to_cm();
    void test_palindrome();
    void test_time();
    void test_circle_game();
    void test_phrases();
};

void TestTest::test_inch_to_cm()
{
    int inches = 301;
    Meters meter;
    calculating_inch_to_cm(inches, &meter);
    QCOMPARE(meter.m, 7);
    QCOMPARE(meter.cm, 64);
    QCOMPARE(meter.mm, 5.4);
}

void TestTest::test_time()
{
    double velocity[3] = {60, 80, 100};
    double time[3] = {4, 2, 5};
    QCOMPARE(calculating_time(velocity, time), 6.5);
}

void TestTest::test_palindrome()
{
    char number[20] = "2311441132";
    QVERIFY2(is_palindrome(number), "Failed palindrome");
    strcpy(number, "525321");
    QVERIFY2(!is_palindrome(number), "Failed palindrome");
}

void TestTest::test_circle_game()
{
    QCOMPARE(determine_the_winner(5, 3), 4);
    QCOMPARE(determine_the_winner(32, 5), 13);
    QCOMPARE(determine_the_winner(9, 45), 7);
}

void TestTest::test_phrases()
{
    char str[100] = "check.Check check. check. check check. Check.check.";
    upper_case_phrases(str);
    QCOMPARE(str, "Check.Check check. Check. Check check. Check.Check.");
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"

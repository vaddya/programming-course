#include <QString>
#include <QtTest>
#include "arrayapp.h"

class CpptestTest : public QObject
{
    Q_OBJECT

public:
    CpptestTest();

private Q_SLOTS:
    void TestArrayAppDemo();
};

CpptestTest::CpptestTest()
{
}


/// тест тестирует не AppDemo, a cam Array,
/// и должен называться соответствующе
///
/// а еще лучше разбить этот тест на несколько тестов,
/// касающихся разных аспектов (копирование, добавление, и прочее)
///
/// Сейчас если копирование происходит неверно, то упадет весь тест,
/// и не понятно, что бросаться исправлять (добавление, определение размера или другое?)
///
/// А хочется, чтобы сразу было понятно из сводки по результатам прогона тестов
///
/// Сделайте по отдельному тесту на каждый public метод
void CpptestTest::TestArrayAppDemo()
{
    ArrayApp array;
    array.AddItem(5);
    array.AddItem(6);
    array.AddItem(7);
    QCOMPARE(array.GetSize(), 3);
    ArrayApp array2;
    array2.Copy(array);
    QCOMPARE(array.GetSize(), 3);
    QCOMPARE(array[2], 7);
}

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"

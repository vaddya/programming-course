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

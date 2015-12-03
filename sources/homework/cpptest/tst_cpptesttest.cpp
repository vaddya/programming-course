#include <QString>
#include <QtTest>
#include "arrayapp.h"

class CpptestTest : public QObject
{
    Q_OBJECT

public:
    CpptestTest();

private Q_SLOTS:/*
    void TestGetSize();
    void TestSetSize();
    void TestSetItem();
    void TestGetItem();
    void TestCopying();
    void TestAdding();*/
};

CpptestTest::CpptestTest()
{
}
/*
void CpptestTest::TestGetSize()
{
    Array array(6);
    QCOMPARE(array.get_size(), 6);
}

void CpptestTest::TestSetSize()
{
    Array array(6);
    QCOMPARE(array.get_size(), 6);
    array.set_size(3);
    QCOMPARE(array.get_size(), 3);
}

void CpptestTest::TestGetItem()
{
    Array array(4);
    QCOMPARE(array[0], 0);
}

void CpptestTest::TestSetItem()
{
    Array array(3);
    QCOMPARE(array[0], 0);
    array.set_item(0, 5);
    QCOMPARE(array[0], 5);
}

void CpptestTest::TestCopying()
{
    Array array1(3);
    array1.set_item(0, 0);
    array1.set_item(1, 1);
    array1.set_item(2, 2);
    Array array2;
    array2.copy(array1);
    QCOMPARE(array2.get_size(), 3);
    QCOMPARE(array2[0], 0);
    QCOMPARE(array2[1], 1);
    QCOMPARE(array2[2], 2);
}

void CpptestTest::TestAdding()
{
    Array array;
    array.add_item(5);
    QCOMPARE(array.get_size(), 11);
    QCOMPARE(array[10], 5);
}*/

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"

#include "arrayapp.h"
using namespace std;


/// Способ вывода на экран, это дело специфическое для конкретного приложения,
/// я бы не добавляла это в либу, а методы перенесла в качестве private методов ArrayAppDemo
void ArrayApp::ShowArray() const
{
    for (int i = 0; i < GetSize(); i++)
        cout << (*this)[i] << " ";
    cout << endl;
}

void ArrayApp::EnterArray()
{
    int item;
    for (int i = 0; i < GetSize(); i++)
    {
        cout << "#" << i+1 << " ";
        cin >> item;
        SetItem(i, item);
    }
}

void ArrayApp::EnterArray(int sz)
{
    SetSize(sz);
    SetArr(new int [sz]);
    int item;
    for (int i = 0; i < sz; i++)
    {
        cout << "#" << i+1 << " ";
        cin >> item;
        SetItem(i, item);
    }
}

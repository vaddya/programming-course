#include "arrayapp.h"
using namespace std;

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

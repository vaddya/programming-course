#include "arrayapp.h"

void ArrayApp::enter_array()
{
    int item;
    for (int i = 0; i < get_size(); i++)
    {
        cout << "#" << i+1 << " ";
        cin >> item;
        set_item(i, item);
    }
}

void ArrayApp::enter_array(int sz)
{
    set_size(sz);
    set_ptn(new int [sz]);
    int item;
    for (int i = 0; i < sz; i++)
    {
        cout << "#" << i+1 << " ";
        cin >> item;
        set_item(i, item);
    }
}

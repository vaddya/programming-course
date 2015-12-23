#include "arrayappdemo.h"

void ArrayAppDemo::demo() const
{
    creating_without_parameter();
    creating_with_fix_size();
    creating_with_users_size();
}
void ArrayAppDemo::creating_without_parameter() const
{
    ArrayApp array;
    cout << "CHECK THE ARRAY" << endl
        << "Creating Array#1 without parameters:" << endl
        << "Array 0" << endl;
    array.show_array();
    cout << endl;

}

void ArrayAppDemo::creating_with_fix_size() const
{
    ArrayApp array;
    cout << "Creating Array#2 with fixed size 3:" << endl
         << "Array#2" << endl;
    array.enter_array(3);
    array.show_array();
    cout << endl;
}

void ArrayAppDemo::creating_with_users_size() const
{
    ArrayApp array;
    cout << "Creating Array#3 with user's size:" << endl
         << "Array#3" << endl
         << "Enter size of array: ";
    int num;
    cin >> num;
    array.enter_array(num);
    array.show_array();
    cout << endl;
    creating_with_existing_array(array);
}

void ArrayAppDemo::creating_with_existing_array(ArrayApp & array2) const
{
    ArrayApp array(array2);
    cout << "Creating Array#4 using an existing Array#3:" << endl
         << "Array#4" << endl;
    array.show_array();
    cout << endl;
}

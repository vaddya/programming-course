#include "arrayappdemo.h"

void ArrayAppDemo::demo() const
{
    creatingWithoutParameter();
    creatingWithFixSize();
    creatingWithUserSize();
}
void ArrayAppDemo::creatingWithoutParameter() const
{
    ArrayApp array;
    cout << "CHECK THE ARRAY" << endl
        << "Creating Array#1 without parameters:" << endl
        << "Array 0" << endl;
    cout << array;
    cout << endl;

}

void ArrayAppDemo::creatingWithFixSize() const
{
    ArrayApp array(3);
    cout << "Creating Array#2 with fixed size 3:" << endl
         << "Array#2" << endl;
    cin >> array;
    cout << array;
    cout << endl;
}

void ArrayAppDemo::creatingWithUserSize() const
{
    ArrayApp array;
    cout << "Creating Array#3 with user size:" << endl
         << "Array#3" << endl
         << "Enter size of array: ";
    int num;
    cin >> num;
    array.setSize(num);
    cin >> array;
    cout << array;
    cout << endl;
    creatingWithExistingArray(array);
}

void ArrayAppDemo::creatingWithExistingArray(ArrayApp & array2) const
{
    ArrayApp array(array2);
    cout << "Creating Array#4 using an existing Array#3:" << endl
         << "Array#4" << endl;
    cout << array;
    cout << endl;
}

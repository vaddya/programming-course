#include "arrayappdemo.h"

void ArrayAppDemo::demo()
{
    ArrayApp array0;
    cout << "CHECK THE ARRAY" << endl
        << "Creating Array0 without parameters:" << endl
        << "Array 0" << endl;
    array0.show_array();
    cout << endl;


    ArrayApp array1;
    cout << "Creating Array1 with fixed size 3:" << endl
         << "Array 1" << endl;
    array1.enter_array(3);
    array1.show_array();
    cout << endl;

    ArrayApp array2;
    cout << "Creating Array2 with user's size:" << endl
         << "Array 2" << endl
         << "Enter size of array: ";
    int num;
    cin >> num;
    array2.enter_array(num);
    array2.show_array();
    cout << endl;

    ArrayApp array3(array2);
    cout << "Creating Array3 using an existing Array2:" << endl
         << "Array 3" << endl;
    array3.show_array();
    cout << endl;
}

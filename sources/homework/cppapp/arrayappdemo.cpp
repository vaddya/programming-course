#include "arrayappdemo.h"

void ArrayAppDemo::demo()
{
    int num;
    puts("Main menu. Choose a task:");
    puts("1. Check the creating function");
    puts("2. Check the copy function");
    puts("3. Check the function of adding item");
    puts("0. Exit");
    printf(">>> ");
    if (scanf("%d", &num) == 1)
    {
        switch (num)
        {
        case 0:
            break;
        case 1:
            check_creating(); demo(); break;
        case 2:
            check_copy(); demo(); break;
        case 3:
            check_additem(); demo(); break;
        default:
            puts("Error! Invalid number.\n"); demo(); break;
        }
    }
    else
    {
        puts("Error! Input a number.\n");
        cin.clear();
        while(cin.get() != '\n');
        demo();
    }
}

void ArrayAppDemo::check_creating()
{
    ArrayAppDemo array0;
    cout << "CHECK THE CREATING FUNCTION" << endl
        << "Creating Array0 without parameters:" << endl
        << "Array 0" << endl;
    array0.show_array();
    cout << endl;


    ArrayAppDemo array1;
    cout << "Creating Array1 with fixed size 3:" << endl
         << "Array 1" << endl;
    array1.enter_array(3);
    array1.show_array();
    cout << endl;

    ArrayAppDemo array2;
    cout << "Creating Array2 with user's size:" << endl
         << "Array 2" << endl
         << "Enter size of array: ";
    int num;
    cin >> num;
    array2.enter_array(num);
    array2.show_array();
    cout << endl;

    ArrayAppDemo array3(array2);
    cout << "Creating Array3 using an existing Array2:" << endl
         << "Array 3" << endl;
    array3.show_array();
    cout << endl;
}

void ArrayAppDemo::check_copy()
{
    ArrayAppDemo array1;
    cout << "CHECK THE COPY FUNCTIOIN" << endl
         << "Make Array1 with size 3:" << endl;
    array1.enter_array(3);
    array1.show_array();

    ArrayAppDemo array2;
    cout << "Copying Array1 to Array2" << endl;
    array2.copy(array1);
    cout << "Array2:" << endl;
    array2.show_array();
    cout << endl;
}

void ArrayAppDemo::check_additem()
{
    ArrayAppDemo array;
    cout << "CHECK THE FUNCTION OF ADDING ITEM" << endl
         << "Make Array with size 3:" << endl;
    array.enter_array(3);
    array.show_array();
    cout << endl << "Now enter a new item: ";
    int newitem;
    cin >> newitem;
    array.add_item(newitem);
    cout << "Array 2 after adding" << endl;
    array.show_array();
    cout << endl;
}

/// Я бы перенесла этот метод в ArrayApp
void ArrayAppDemo::show_array() const
{
    cout << "Size = " << get_size() << ": [ ";
    for (int i = 0; i < get_size(); i++)
        cout << (*this)[i] << " ";
    cout << "]" << endl;
}

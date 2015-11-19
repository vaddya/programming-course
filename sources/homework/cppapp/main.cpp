/* Реализовать класс МАССИВ (целых чисел, переменного размера).
 * Требуемые методы: конструктор, деструктор, копирование, индексация.
 * При индексации за пределами массива его размер должен увеличиваться.
 */
#include <iostream>
#include "array.h"
using std::cin;
using std::cout;
using std::endl;

void ShowArray(Array &);

int main()
{
    Array array1;
    cout << "Array 1" << endl;
    array1.EnterArray(3);
    cout << "Size: " << array1.GetSize() << endl;
    ShowArray(array1);
    cout << endl;

    Array array2;
    cout << "Array 2" << endl;
    cout << "Enter size of array: ";
    int num;
    cin >> num;
    array2.EnterArray(num);
    cout << "Size: " << array2.GetSize() << endl;
    ShowArray(array2);
    cout << endl;

    array2.Copy(array1);
    cout << "Array 2 after copying: " << endl;
    cout << "Size: " << array2.GetSize() << endl;
    ShowArray(array2);
    cout << endl;

    cout << "Adding item to 2 array: " << endl;
    cout << "Enter new item: ";
    int newitem;
    cin >> newitem;
    array2.AddItem(newitem);
    cout << "Array 2 after adding" << endl;
    cout << "Size: " << array2.GetSize() << endl;
    ShowArray(array2);
    cout << "New item: " << array2[3] << endl;

    cout << endl;
    return 0;
}

void ShowArray(Array & array)
{
    for (int i = 0; i < array.GetSize(); i++)
        cout << array[i] << " ";
    cout << endl;
}
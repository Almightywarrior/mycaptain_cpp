
/*Write a C++ Program to Find Size of int, float, double and char
 in Your System Your output should look something like this Size of char:
 1 byte Size of int: 4 bytes Size of float: 4 bytes Size of double: 8 bytes*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Size of int-> " <<sizeof(int)<<" Byte"<<endl;
    cout << "Size of float-> " <<sizeof(float)<<" Byte"<<endl;
    cout << "Size of double-> " <<sizeof(double)<<" Byte"<<endl;
    cout << "Size of char-> " <<sizeof(char)<<" Byte"<<endl;
    return 0;
}

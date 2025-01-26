// 2VariableSwap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, z;
    
    cout << "Enter your first int 1) :" << endl;
    cin >> a;
    cout << "Enter your secound int 2) :" << endl;
    cin >> b;
    z = a;
    a = b;
    b = z;

    cout << "Variables swaped: a= " << a << ", b= " << b << endl;

    
}
/*Enter your first int 1) :
1
Enter your secound int 2) :
2
Variables swaped: a= 2, b= 1

C:\CIS-06\2VariableSwap\x64\Debug\2VariableSwap.exe (process 3336) exited with code 0 (0x0).
Press any key to close this window . . .*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

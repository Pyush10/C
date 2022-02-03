// Author:Pyush Singh Kunwar
// Date: 2021/4/26
// Project for pyramid

//WAP to make FULL PYRAMID
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int space, rows;
  cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    } 
    getch(); 
    return 0;
}

    

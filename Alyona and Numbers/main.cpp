#include <iostream>
using namespace std;
int main()
{

     long long X, Y, divX, divY, modX, modY, xx ,resultOfDiv; 
     
          cin >> X >> Y;
          
          modX = X % 5;
          modY = Y % 5;

          divX = X / 5;
          divY = Y / 5;

          xx = (modX + modY <= 8 && modX + modY >= 5)?(modX + modY - 4) : 0; 

          if (X < 5 || Y < 5)
               resultOfDiv = (modX * divY) + (modY * divX) + xx;
          else
               resultOfDiv = (divX * divY * 5) + (modX * divY) + (modY * divX) + xx;

          cout <<resultOfDiv;
     return 0;
}
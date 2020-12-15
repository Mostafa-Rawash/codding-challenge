#include <iostream>
using namespace std;
int main()
{
          int hour, min;
          int totalTimes;
          cin >> totalTimes;
          for (int i = 0; i < totalTimes; i++)
          {
                    cin >> hour >> min;
                    cout << 1440 - (hour * 60 + min)<<endl;
          }
                    return 0;
} 
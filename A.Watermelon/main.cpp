/* 
 *  Auther   : Mostafa Rawash
 *  Data     : 8/20/2020
 *  URL Link : "https://codeforces.com/problemset/problem/4/A"
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    if ((num) % 2 == 1 || num == 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
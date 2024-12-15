#include <iostream>
using namespace std;
int main()
{
    float h, b, a;
    cout << "Enter height:" << endl;
    cin >> h;
    cout << "Enter base:" << endl;
    cin >> b;
    a = (float)(b * h) / 2;
    cout << "Area is: " << endl << a;
    return 0;
}

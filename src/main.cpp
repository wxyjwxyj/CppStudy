#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main(void)
{
    short sam = SHRT_MAX;
    cout << sam << endl;
    int carrots;
    cout << "how many carrots do you have?" << endl;
    cin >> carrots;
    cout << "here are two more. " << endl;
    carrots += 2;
    cout << "now you have " << carrots << " carrots" << endl;
    // system("pause");
    return 0;
}
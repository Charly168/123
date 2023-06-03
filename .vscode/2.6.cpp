#include <iostream>

int main()
{
    using namespace std;
    double years;
    cout << "enter the number of light years: ";
    cin >> years;

    double values;
    values = 63240*years;
    cout << years << " light years = " << values << " astronomical units" << endl;

    return 0;
}
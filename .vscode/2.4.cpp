#include <iostream>

int main()
{
    using namespace std;
    int age;
    
    cout << "Please enter your age: ";
    cin  >> age;

    int months;
    months = 12*age;
    cout << "There is " << months << " months" << endl;
    return 0;
}
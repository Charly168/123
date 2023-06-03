#include <iostream>

double Fahrenheit(double);

int main()
{
    using namespace std;

    double Celsius;
    cout << "Please enter a Celsius value: ";
    cin >> Celsius; 
    Fahrenheit(Celsius);

    return 0;
}

double Fahrenheit(double n)
{
    using namespace std;
    double Values;
    Values = 1.8*n + 32.0;
    cout << n << " degress Celsius is " << Values <<" degress Fahrenheit." << endl;

}
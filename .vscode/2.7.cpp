#include <iostream>
void Time(int,int);


int main()
{
    using namespace std;
    int h,m;
    Time(h,m);
    return 0;
}

void Time(int h,int m)
{
    using namespace std;
    cout << "Enter the number of hours: " ;
    cin >> h;
    cout << "Enter the number of minutes:";
    cin >> m;
    cout << "Time: " << h << ":" << m ;
}


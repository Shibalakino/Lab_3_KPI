#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

int main() 
{
    float precision = 0, a = 0, p = 0;
    int counter = 1;
    double prev, cur = 1;
    cout << "Enter a value of precision : " << endl;
    cin >> precision;
    cout << "Enter a value of a : " << endl;
    cin >> a;
    cout << "Enter a value of p : " << endl;
    cin >> p;
    do 
    {
        tie(prev, cur) = make_tuple(cur, (1 / p) * (((p - 1) * cur) + (a /(pow(cur,                  (p - 1))))));
       cout <<"itaration № : " << counter << " - "<< cur << endl;
       counter++;
    }
    while (abs(cur - prev) > precision);
    cout << "result :"<< cur << endl;
    return 0;
 }

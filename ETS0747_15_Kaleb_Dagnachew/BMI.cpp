#include <iostream>
using namespace std;
int main()
{
    double weight, height;
    cout << "Enter your weight";
    cin >> weight;
    cout << "Enter your height (in meter)";
    cin >> height;
    double bmi =weight/(height*height);
    cout << "Your BMI result is" << bmi;
    return 0;
}


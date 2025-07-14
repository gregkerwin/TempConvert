//TemperatureConverter

#include <iostream>
using namespace std;

void CelsiusToFahrenheit(double, double&);
void FahrenheitToCelsius(double, double&);

int main()
{
    double fahrenheit{};
    double celsius{};

    int answer{};
    cout << "1. Convert to celsius from fahrenheit" << endl;
    cout << "2. Convert to fahrenheit from celcius" << endl;
    cin >> answer;


    if (cin.fail() || (answer != 1 && answer != 2))
    {
        cin.clear();  
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "You must enter '1' or '2'!" << endl;
    }

    if (answer == 1)
    {
        cout << "Fahrenheit to Celsius" << endl;
        cout << "Enter the Fahrenheit you want to convert to Celsius" << endl;
        cin >> fahrenheit;
        FahrenheitToCelsius(fahrenheit, celsius);
        cout << "Conversion: " << celsius << " Celsius" << endl;
    }
    else if (answer == 2)
    {
        cout << "Celsius To Fahrenheit" << endl;
        cout << "Enter the Celsius you want to convert to Fahrenheit" << endl;
        cin >> celsius;
        CelsiusToFahrenheit(celsius, fahrenheit);
        cout << "Conversion: " << fahrenheit << " Fahrenheit" << endl;
    }
    else { cout << "You must enter '1' or '2'!" << endl; }

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Press Enter to exit...";
    cin.get();

    return 0;

}

void CelsiusToFahrenheit(double celsius, double& fahrenheit)
{
    fahrenheit = (celsius * 1.8) + 32;
}

void FahrenheitToCelsius(double fahrenheit, double& celsius)
{
    celsius = (fahrenheit - 32) / 1.8;
}


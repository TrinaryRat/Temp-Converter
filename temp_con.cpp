// This program converts temperatures into Celsius Kelven or Fahrenheit


#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{

   //enter temp in Fahrenheit
   int Fahrenheit;
   cout << "enter the temperature in Fahrenheit:";
   cin >> Fahrenheit;

   //Converts Fahrenheit into Celsius
   int Celsius;
   Celsius = (Fahrenheit - 32) * 5/9;

   //Converts Celsius to Kelven
   double Kelven;
   Kelven = Celsius + 273.15;

   //outputs result followed by new line
   cout << "Fahrenheit Value is:";
   cout << Fahrenheit << endl;
   cout << "Celsius value is:";
   cout << Celsius << endl;
   cout << "Kelven value is:";
   cout << Kelven << endl;

   //pauses to allow user to see program result
   system("PAUSE");
   return 0;

}

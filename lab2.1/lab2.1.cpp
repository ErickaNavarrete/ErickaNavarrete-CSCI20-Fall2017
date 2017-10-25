#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double velocity;
    double tempF;
    double OldStyleWindChill;
    double NewStyleWindChill;
    
    cout<< "Insert the Windspeed"<< endl;
    cin>> velocity;
    
    cout<<"Insert the Temp in Fareheight"<< endl;
    cin>>tempF;
    
   
    OldStyleWindChill= 0.081*(3.71*(sqrt(velocity))+ 5.81-0.25 * velocity) * (tempF-91.4) + 91.4;
    NewStyleWindChill= 35.74+0.6215 * tempF - 35.75*(pow(velocity,0.16))+0.4275* tempF*(pow(velocity,0.16));
    
    cout<<"Windspeed "<< velocity<< " Old Formula "<< OldStyleWindChill << " New Formula "<< NewStyleWindChill << " Difference "<< OldStyleWindChill-NewStyleWindChill<< endl;
}
 
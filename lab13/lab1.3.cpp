#include<iostream>
using namespace std;

int main()
{
    float BirthsPerSec = 8;
    float DeathPerSec = -12;
    float MigrantPerSec = 33;
    float NetGainPerSec = 12;
    
    float BirthsPerMin = 60/BirthsPerSec;
    float DeathsPerMin = 60/DeathPerSec;
    float MigrantPerMin = 60/MigrantPerSec;
    float NetGainPerMin = 60/NetGainPerSec;
    
    float BirthsInYear = 525600/BirthsPerMin;
    float DeathPerYear = 525600/DeathsPerMin;
    float MigrantPerYear = 525600/MigrantPerMin;
    float NetGainPerYear = 525600/NetGainPerMin;
    
    int CurrentPop = 325770216;
    int years;
    
    cout<< "What many years in the future do you want to see into the future?"<<endl;
    cin>>years; 
    cout<<(CurrentPop*(years * (BirthsInYear+DeathPerYear+MigrantPerYear+NetGainPerYear)))<<endl;
} //Had wonderful help from that guy in the end. 
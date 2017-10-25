#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

class RunnersCal {
    public:
    void info();
    double calculate_fps(double minutes, double seconds);
    double calculate_mps(double fps, double feet_meter);
    
    private: 
    
};

int main()
{

	string runner;
	int minutes;
	double seconds, fps, mps, total;			//Feet per second, meters per second, total seconds
	const double fpM = 0.3408;					//Feet per Meter	
	double result;								//Feet per second result
	double meterResult;							//Meter per second result


	info();



	cout << "Please enter the runners' time in Minutes: " << endl;
	cin >> minutes;
	cout << endl;

	cout << "Please enter the runners' time in Seconds: " << endl;
	cin >> seconds;
	cout << endl;

	result = calculate_fps(minutes, seconds);

	total = (minutes * 60) + seconds;	

	meterResult = calculate_mps(result, fpM);					
																

	cout << " ran  " << result << " feet per second or " << meterResult << " meters per second." << endl;


	return 0;
}

void RunnersCal::info()
{
	cout << endl;
	cout << "For this program you will be prompted to input a runner's last name, minutes,   and seconds." << endl;
	cout << "The program will then calculate and output the runner's speed in Feet/Second andMeters/Second." << endl;
	cout << endl;

}

double RunnersCal::calculate_fps(double minutes, double seconds)
{
	double fps;
	double total;
	const int mile = 5280;
	total = (minutes * 60) + seconds;
	fps = mile / total;
	return (fps);

}

double RunnersCal::calculate_mps(double fps, double feet_meter)
{

	double mps;
	mps = fps * 0.3048;
	return (mps);
}
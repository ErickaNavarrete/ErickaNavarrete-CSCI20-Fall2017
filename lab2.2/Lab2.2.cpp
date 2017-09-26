#include <iostream>
#include <time.h>
using namespace std; //Let srand work
/* Ericka Navarrete
9-25-17
this code creates a random number output*/

void Random() { //Function Name
    cout<<"Random number:" ;
    srand(time(NULL));
    int number = rand() % 100 + 1; //creates number
    cout<<number; //outputs the number
}
int main(){
    Random();//calls the function 
}
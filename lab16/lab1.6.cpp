#include <iostream>
#include <string>
using namespace std;
/* Ericka Navarrete
  9/13/17
  This is so that user can insert stock infor to be sorted */ 


// Stuct for the stock files
struct Stock{
    string name;
    char sector;
    double currentSharePrice;
    double currentSharesOwned;
};


  
  //Beginning of code to allow data to be recieved
  int main(){
      
    Stock stock1;
    Stock stock2;
    Stock stock3;
    Stock stock4;
    
    cout<<"Enter Stock One Information." <<endl;
    cin>> stock1.name;
    cin>> stock1.sector;
    cin>> stock1.currentSharePrice;
    cin>> stock1.currentSharesOwned;
    cout<<"Stock Name " << " NO of Shares" << "  Price of Shares" << " Total Amount " << endl;
    cout<<"----------" << "     --------- "  << "   ---------  " << "  ----------- " << endl;
    cout<<"   "<< stock1.name <<"   |      " << stock1.currentSharesOwned << "   |       " << stock1.currentSharePrice << "   |     " << stock1.currentSharePrice << stock1.currentSharesOwned* stock1.currentSharePrice << endl;
    cout << " Total Portfolio: " << stock1.currentSharePrice << stock1.currentSharesOwned* stock1.currentSharePrice << endl;
  
  cout<<"Enter Stock Two Information." <<endl;
    cin>> stock2.name;
    cin>> stock2.sector;
    cin>> stock2.currentSharePrice;
    cin>> stock2.currentSharesOwned;
    cout<<"Stock Name " << " NO of Shares" << "  Price of Shares" << " Total Amount " << endl;
    cout<<"----------" << "     --------- "  << "   ---------  " << "  ----------- " << endl;
    cout<<"   "<< stock2.name <<"   |      " << stock2.currentSharesOwned << "   |       " << stock2.currentSharePrice << "   |     " << stock2.currentSharePrice << stock2.currentSharesOwned* stock2.currentSharePrice << endl;
  
    cout << " Total Portfolio: " << stock2.currentSharePrice << stock2.currentSharesOwned* stock2.currentSharePrice << endl;
    cout<<"Enter Stock Three Information." <<endl;
    cin>> stock3.name;
    cin>> stock3.sector;
    cin>> stock3.currentSharePrice;
    cin>> stock3.currentSharesOwned;
    cout<<"Stock Name " << " NO of Shares" << "  Price of Shares" << " Total Amount " << endl;
    cout<<"----------" << "     --------- "  << "   ---------  " << "  ----------- " << endl;
    cout<<"   "<< stock3.name <<"   |      " << stock3.currentSharesOwned << "   |       " << stock3.currentSharePrice << "   |     " << stock3.currentSharePrice << stock3.currentSharesOwned* stock3.currentSharePrice << endl;
cout << " Total Portfolio: " << stock3.currentSharePrice << stock3.currentSharesOwned* stock3.currentSharePrice << endl;  
  
  cout<<"Enter Stock Four Information." <<endl;
    cin>> stock4.name;
    cin>> stock4.sector;
    cin>> stock4.currentSharePrice;
    cin>> stock4.currentSharesOwned;
    cout<<"Stock Name " << " NO of Shares" << "  Price of Shares" << " Total Amount " << endl;
    cout<<"----------" << "     --------- "  << "   ---------  " << "  ----------- " << endl;
    cout<<"   "<< stock4.name <<"   |      " << stock4.currentSharesOwned << "   |       " << stock4.currentSharePrice << "   |     " << stock4.currentSharePrice << stock4.currentSharesOwned* stock4.currentSharePrice << endl;
   cout << " Total Portfolio: " << stock4.currentSharePrice << stock4.currentSharesOwned* stock4.currentSharePrice << endl;
  }
  
  
  
  
 
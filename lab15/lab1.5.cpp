#include<iostream>
#include<string>
using namespace std;

/* Ericka Navarrete
9/11/17
This code is a mad lib allowing users to input works to go into a script. */

    int main()
    {
        string Person;
        string Place;
        string PluralNoun; 
        string Adjective;
        string AdjectiveTwo;
        string PluralNounTwo;
        string ActionVerb;
        string PluralNounThree;
        string food;
        
        //user inputs
    cout << "Type input without spaces." << endl;
   cout << "Enter a kind of Person: " << endl;
   cin  >> Person;

   cout << "Enter a Place " << endl;
   
   cin  >> Place;
   
    cout << "Enter a kind of adjective " << endl;
   cin  >> Adjective;

   cout << "Enter a kind of Plural noun: " << endl;
   cin  >> PluralNoun;

   cout << "Enter a kind of adjective " << endl;
   cin  >> AdjectiveTwo;

   cout << "Enter an Plural Noun: "   << endl;
   cin  >> PluralNounTwo;

   cout << "Enter a Action verb:"  << endl;
   cin  >> ActionVerb;
        

   cout << "Enter a Plural noun: " << endl;
   cin  >> PluralNounThree;

   cout << "Enter a kind of food: " << endl;
   cin  >> food;
   //Create output of user input
   cout << endl;
   cout << "Last summer, my mom and day took me and " << Person << " on a trip to " << Place << "." << endl;
   cout << "The weather there is very " << Adjective << "!" << endl;
   cout << "Northern " << Place << " Has many " << PluralNoun << "," <<endl;
   cout<< "and they make" << AdjectiveTwo << " " <<PluralNounTwo<< "there." << endl;
   cout << "Many people go to " << Place << " to " << ActionVerb << "or to see the" << PluralNounThree << "." << endl;
   cout<< "The people that live there love to eat " << food << "."<< endl;
   cout << "It was a fun trip!" << endl;

    }
//Name: Chris Humphreys and Denver Crittenden
//Date: 07/25/16
//Description: Clock Project

//Big Menu Clock Program Project 2

#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>
#define CDT (-5)  // Time Zone
// define is another way to make a constant

using namespace std;

string line1, line2, line3, line4, line5, line6;
// We will copy the big numbers/characters into these global lines

const string BLACK_SQUARE = "&#x25FE";  // web + unicode
const string WHITE_SQUARE = "&#x25FD";  // web + unicode
const string SMILEY = "&#x1F603";       // web + unicode

// make a function for each number / char you need...
void c0(){
    line1 += " XXX  ";
    line2 += "X   X ";
    line3 += "X   X ";
    line4 += "X   X ";
    line5 += "X   X ";
    line6 += " XXX  ";
}

void copyBigChar(char n){
    if (n == '0')
        c0();
	    //...
}

void showLines(){  // put the big chars on the screen
    cout << line1 << endl << line2 << endl << line3 << endl;
    cout << line4 << endl << line5 << endl << line6 << endl; 
}

void showBigString(string s, string mode){
	// loop through the string and show each char 
    // in the requested mode
    // ...
}

string getTime(){  // gets the time of day as a string - formatted hh:mm:ss
    // Function by Bob Bradley...
    // Info at: https://stackoverflow.com/questions/997946/how-to-get-current-time-and-date-in-c
    // There is a better way to do this in c++ 11, but this way should work on more versions...
            
    time_t rawtime;
    struct tm * ptm;

    time ( &rawtime );
    ptm = gmtime ( &rawtime );
                  
    int h = (24 + ptm->tm_hour+CDT)%24;  // add in the time zone offset
    int m = ptm->tm_min;
    int s = ptm->tm_sec;
                                     
    stringstream ss;      // prints into a string
    ss << setfill('0');   // pads the numbers with leading zeros (0)
    ss << setw(2) << h << ":" << setw(2) << m << ":" << setw(2) << s;
    return ss.str();
}

int main(){
    string mode = "normal";
		    
    c0(); c1(); 
    showLines();
    clearLines();
	// menu code here
}						

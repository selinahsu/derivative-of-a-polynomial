#include <iostream>
#include <string>
#include <cmath>
#include <sstream> 

using namespace std;

int main () {
	string input = "";
	cout << "Enter a term to derive with respect to x, with no spaces or brackets: " << endl;
	cin >> input; 
	int length = input.size(); 
	
	// separate coefficient
	string coeffStr = input.substr(0, input.find("^")); // turn coefficient to string
	int digits = coeffStr.size(); 
    stringstream coeffToInt(coeffStr); 
    int coeff = 0; 
    coeffToInt >> coeff; 
    
    // separate exponent
	string expStr = input.substr(length-1, length-1);
    stringstream expToInt(expStr); 
    int exp = 0; 
    expToInt >> exp; 

	coeff = coeff*exp; 
	exp--; 

	cout << coeff << "^" << exp << endl; 
	
	system("PAUSE"); 
	return 0;
}

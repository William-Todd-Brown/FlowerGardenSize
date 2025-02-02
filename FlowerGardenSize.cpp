// A program that calculates the size of a rectangular flower gardent in a nature center. 
// The program should prompt the user to enter the lenght and width of the garden in feet. 
// It should then calculate and display the number of square feet in the garden. 

#include <iostream>
using namespace std;

int main() {
	int length;
	int width;
	int totalFeet;

	cout << "What is the length (in feet) is your flower garden?" << endl;
	cin >> length;
	cout << "What is the width (in feet) is your flower garden?" << endl;
	cin >> width;
	totalFeet = length * width;
	cout << "Your flower garden is " << totalFeet << " square feet." << endl;
	return 0;
}

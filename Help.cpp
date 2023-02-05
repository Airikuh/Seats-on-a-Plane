
//Purpose: Help.cpp Source File Function to Display Detailed Message on How to Use the Program
//Author: Erika Valle-Baird
//Creation Date: 11/30/2019
//Last Modification Date: 12/2/2019
#include "Header.h"

//Function Definition
void Help() {
	//Display Messages For Each Option in the Program
	cout << "This is a Flight Reservation Program to Reserve, ";
	cout << "Cancel, and Get Various Statistics for This Flight." << endl;

	cout << "Input 1: Displays the Seating Chart on The Plane. " << endl;

	cout << "Input 2: Reserves a Seat on The Plane. " << endl;

	cout << "Input 3: Cancels an Existing Reservation. " << endl;

	cout << "Input 4: Saves The Seat Chart To a File For Future Reference. " << endl;

	cout << "Input 5: -Displays the Number of Available Seats " << endl;
	cout << "         -Percentage of Seats That Are Reserved " << endl;
	cout << "         -List of Window Seats Currently Available " << endl;
	cout << "         -List of Aisle Seats Currently Available " << endl;

	cout << "Input 7: Quits Program.";


}


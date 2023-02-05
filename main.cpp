
//Purpose: main.cpp Source File for Main Function of Program
//Author: Erika Valle-Baird
//Creation Date: 11/30/2019
//Last Modification Date: 12/10/2019
#include "Header.h"

//Function Prototypes
int DisplayMenu();
void Help();

int main(){

	//Variable Declaration
	int userChoice = 0;
	Plane reservation;

	//While Loop to Call Functions and Methods
	//As Long as Input is Not 7 For Quit
	while (userChoice != 7) {

		//Call to Display Menu Function and Return Choice
		userChoice = DisplayMenu();

	//If and Else If Statements to Call Method or Function Based 
		//On User Choice
		if (userChoice == 1)
			reservation.DisplayChart();
		else if (userChoice == 2)
			reservation.ReserveSeat();
		else if (userChoice == 3)
			reservation.CancelReservation();
		else if (userChoice == 4)
			reservation.saveChart();
		else if (userChoice == 5)
			reservation.Statistics();
		else if (userChoice == 6)
			Help();
		else if (userChoice == 7) {
			cout << "Thank You!";
		}
	}
	return 0;
}


//Purpose: DisplayMenu.cpp Source File To Display Menu To 
//Show Different Options in Program and Return User's Choice
//Author: Erika Valle-Baird
//Creation Date: 12/2/2019
//Last Modification Date: 12/3/2019
#include "Header.h"

#include<iostream>

//Function Definition for Display Menu
int DisplayMenu() {

	//Variable Declaration
	int userChoice;

	//Menu Display
	cout << "-------------------- Menu --------------------" << endl;
	cout << endl;
	cout << "1. Display Seat Chart " << endl;
	cout << "2. Reserve Seat " << endl;
	cout << "3. Cancel Reservation " << endl;
	cout << "4. Save Seat Chart To File " << endl;
	cout << "5. Statistics " << endl;
	cout << "6. Help " << endl;
	cout << "7. Quit " << endl;

	cout << "Please Choose an Option 1-7: " << endl;

	//Get User Input
	cin >> userChoice;

	//While Loops to Get Valid User Input
	while (userChoice == 0) {
		cout << "Please Enter a Valid Choice 1-7: ";
		cin >> userChoice;
	}
	while (userChoice <= 0 || userChoice > 7) {
		cout << "Please Enter a Valid Choice 1-7: ";
		cin >> userChoice;
	}

	//Return Value Chosen by User to Main Program
	return userChoice;



}

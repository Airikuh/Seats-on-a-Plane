//Purpose: Header.h File That Declares and Defines Classes for Plane and Seat
//Author: Erika Valle-Baird
//Creation Date: 11/30/2019
//Last Modification Date: 12/10/2019 
#pragma once
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<sstream>
#include <cmath>

using namespace std;


//Class Seat Declaration and Definitions
class Seat {
protected:
	//Seat Attributes
	char seatChart[15][4];
	int count = 0;
	char seatOnPlane;

	//Methods for Seat Class
public:
	//Method to Display Information
	void Display() {
		cout << left << setw(2) << seatOnPlane;
	}
	//Method to Set Character of Seat
	void setSeatOnPlane(const char c) {
		seatOnPlane = c;
	}
	//Method to Get Character of Seat
	char getSeatOnPlane() {
		return seatOnPlane;
	}
};

//Plane Class
class Plane{
	//Plane Attributes-Static to Be Available Throughout the Program and Call to 
	//Seat Class for 2D Array
	static const int row = 15;
	Seat seat[row][4];
public:

	//Plane Constructor to Change Columns to Letters
	Plane()  {
		
		for (int i = 0; i < row; i++)
			seat[i][0].setSeatOnPlane('A');
		for (int i = 0; i < row; i++)
			seat[i][1].setSeatOnPlane('B');
		for (int i = 0; i < row; i++)
			seat[i][2].setSeatOnPlane('C');
		for (int i = 0; i < row; i++)
			seat[i][3].setSeatOnPlane('D');
	}

	//Display Chart Method to Display Chart That Shows Reserved and Available Seats
	void DisplayChart() {
		//For Loop to Populate Chart
		for (int i = 0; i < row; i++) {
			cout << "\n" << i + 1 << " ";
			for (int j = 0; j < 4; j++)
				cout << seat[i][j].getSeatOnPlane() << " ";
		}
		cout << endl;

	}

	//Reserve Seat Method to Reserve a Seat On the Plane
	void ReserveSeat(){
		//Variable Declarations
		int columnNumber;
		int count = 0;
		char number;
		int aisle;

		//Get User Input Row
		cout << "Where Would You Like to Sit? " << endl;
		cout << "Row: ";
		cin >> aisle;

		//While Loop To Retrieve Valid Input in Case of Bad Input
		while (aisle < 0 || aisle > 15) {
			cout << "Invalid Row Number, Please Enter a Valid Row Number 1-15: ";
			cin >> aisle;
		}

		//Get User Input Seat
		cout << "Seat: ";
		cin >> number;
	

		//While Loop To Retrieve Valid Input in Case of Bad Input
		while (number < 'A' || number > 'D') {
			cout << "Invalid Seat Number, Please Enter a Valid Seat Number A, B, C, or D: ";
			cin >> number;
		}
		aisle--;

		//Change Characters to Numeric Values to Change Character to X if Reserved
		if (number == 'A')
			columnNumber = 1;
		if (number == 'B')
			columnNumber = 2;
		if (number == 'C')
			columnNumber = 3;
		if (number == 'D')
			columnNumber = 4;

		//If Else Statements To Cancel Seats in Column A
		if (number == 'A') {
			columnNumber = 0;
			if (seat[aisle][columnNumber].getSeatOnPlane() == 'X') {
				cout << "I'm Sorry, That Seat Cannot be Reserved, It is Already Taken.";
				cout << endl;
			}
			else {
				seat[aisle][columnNumber].setSeatOnPlane('X');
				cout << "Your Seat Was Successfully Reserved!" << endl;
				count--;
			}
		}

		//If Else Statements to Cancel Seats in Column B
		if (number == 'B') {
			columnNumber = 0;
			if (seat[aisle][columnNumber].getSeatOnPlane() == 'X') {
				cout << "I'm Sorry, That Seat Cannot be Reserved, It is Already Taken.";
				cout << endl;
			}
			else {
				seat[aisle][columnNumber].setSeatOnPlane('X');
				cout << "Your Seat Was Successfully Reserved!" << endl;
				count--;
			}
		}

		//If Else Statements to Cancel Seats in Column C
		if (number == 'C') {
			columnNumber = 0;
			if (seat[aisle][columnNumber].getSeatOnPlane() == 'X') {
				cout << "I'm Sorry, That Seat Cannot be Reserved, It is Already Taken.";
				cout << endl;
			}
			else {
				seat[aisle][columnNumber].setSeatOnPlane('X');
				cout << "Your Seat Was Successfully Reserved!" << endl;
				count--;
			}
		}

		//If Else Statements to Cancel Seats in Column D
		if (number == 'D') {
			columnNumber = 0;
			if (seat[aisle][columnNumber].getSeatOnPlane() == 'X') {
				cout << "I'm Sorry, That Seat Cannot be Reserved, It is Already Taken.";
				cout << endl;
			}
			else {
				seat[aisle][columnNumber].setSeatOnPlane('X');
				cout << "Your Seat Was Successfully Reserved!" << endl;
				count--;
			}
		}



	}

	//Cancel Reservation Method
	void CancelReservation(){
		//Variable Declarations
		int columnNumber;
		int count = 0;
		char number;
		int aisle;

		//Get Information from the User to Cancel Reservation
		cout << "I'm Sorry You Are Cancelling Your Reservation!" << endl;
		cout << "Please Enter The Seat You Are Cancelling " << endl;
		cout << "Row: ";
		cin >> aisle;

		//While Loop To Retrieve Valid Input in Case of Bad Input
		while (aisle < 0 || aisle > 15) {
			cout << "Invalid Row Number, Please Enter a Valid Row Number 1-15: ";
			cin >> aisle;
		}

		cout << "Seat: ";
		cin >> number;
		toupper(number);

		//While Loop To Retrieve Valid Input in Case of Bad Input
		while (number < 'A' || number > 'D') {
			cout << "Invalid Seat Number, Please Enter a Valid Seat Number A, B, C, or D: ";
			cin >> number;
		}
		aisle--;
		
		//If Else Statements To Cancel Seats in Column A
		if (number == 'A') {
			columnNumber = 0;
			if (seat[aisle][columnNumber].getSeatOnPlane() != 'X'){
				cout << "I'm Sorry, That Seat Cannot be Cancelled as It Was Not Reserved.";
				cout << endl;
			}
			else {
				seat[aisle][columnNumber].setSeatOnPlane('A');
				cout << "Your Reservation was Successfully Cancelled." << endl;
				count--;
			}
		}

		//If Else Statements to Cancel Seats in Column B
		if (number == 'B') {
			columnNumber = 0;
			if (seat[aisle][columnNumber].getSeatOnPlane() != 'X') {
				cout << "I'm Sorry, That Seat Cannot be Cancelled as It Was Not Reserved.";
				cout << endl;
			}
			else {
				seat[aisle][columnNumber].setSeatOnPlane('B');
				cout << "Your Reservation was Successfully Cancelled." << endl;
				count--;
			}
		}

		//If Else Statements to Cancel Seats in Column C
		if (number == 'C') {
			columnNumber = 0;
			if (seat[aisle][columnNumber].getSeatOnPlane() != 'X') {
				cout << "I'm Sorry, That Seat Cannot be Cancelled as It Was Not Reserved.";
				cout << endl;
			}
			else {
				seat[aisle][columnNumber].setSeatOnPlane('C');
				cout << "Your Reservation was Successfully Cancelled." << endl;
				count--;
			}
		}

		//If Else Statements to Cancel Seats in Column D
		if (number == 'D') {
			columnNumber = 0;
			if (seat[aisle][columnNumber].getSeatOnPlane() != 'X') {
				cout << "I'm Sorry, That Seat Cannot be Cancelled as It Was Not Reserved.";
				cout << endl;
			}
			else {
				seat[aisle][columnNumber].setSeatOnPlane('D');
				cout << "Your Reservation was Successfully Cancelled." << endl;
				count--;
			}
		}

	}

	//Method to Save File to Name of User's Choosing
	void saveChart(){
		//Variable Declaration
		string name;
		ofstream file;

	//Get File Name From User
	cout << "Please Enter the Name of the File to Save the Information to!" << endl;
	cout << "Name: ";
	cin >> name;

	//Explicit File Open
	file.open(name);

	ofstream userFile(name);

	//If File is Open Write Information to It
	if (userFile.is_open()) {
		for (int x = 0; x < row; x++) {
			userFile << x + 1 << " ";

			for (int y = 0; y < 4; y++) {
				userFile << seat[x][y].getSeatOnPlane() << " ";
			}

			userFile << endl;
		}

	}

	//Else Let User Know There is An Issue Opening File
	else {
		cout << "Unable to Open";
	}

}

	//Method to Display Statistics About the Flight
	void Statistics() {
		//Variable Declarations
		int seatsAvailable, total, x, y;
		total = row * 4;
		int windowSeat = 0;
		int aisleSeat = 0;
		int reserved;



		//For Loop to Determine Window Seats from Columns A and D Available
		for (x = 0; x < row; x++)
		{
			for (y = 0; y < 4; y++)
			{
				if (seat[x][y].getSeatOnPlane() != 'X')
					windowSeat++;
				y = y + 2;
			}
		}

		y = 1;
		//For Loops to Determine Aisle Seats From Columns B and C Available
		for (x = 0; x < row; x++) {
			if (seat[x][y].getSeatOnPlane() != 'X')
				aisleSeat++;
		}
		y = 2;
		for (x = 0; x < row; x++) {
			if (seat[x][y].getSeatOnPlane() != 'X')
				aisleSeat++;
		}

		//Variable Declarations for Computation with Detemined Values
		seatsAvailable = windowSeat + aisleSeat;
		reserved = total - seatsAvailable;



		//Display Information 
		cout << "Number of Available Seats: " << seatsAvailable << endl;
		cout << "Number of Reserved Seats: " << reserved << endl;
		cout << "Percentage of Seats That Are Reserved: " << reserved*100/60 << "%" << endl;
		cout << "Window Seats Available: " << windowSeat << endl;
		cout << "Aisle Seats Available: " << aisleSeat << endl;

	}
};


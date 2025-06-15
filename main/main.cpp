#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string>cars;
	int ans;
	int findcar;

	do {
		start:
		cout << "\n[1]Add a car \n[2]Show all cars \n[3]Search for a car \n[4]Exit\n\n";
		cin >> ans;
		string input;
		
		switch (ans) {
		case 1:
			cout << "enter new car to add on the vector\n";
			cin >> input;
			cars.push_back(input);
			cout << input << " was added to the vector" << endl;

			break;

		case 2:
			if (cars.empty()) {
				cout << "no cars found";
			}
			for (string car : cars) {
				cout << car << endl;
			}
			break;

		case 3:
			if (cars.empty()) {
				cout << "No cars to search" << endl;
				goto start; //testing purpose
			}
			cout << "SELECT A CAR BY ITS INDEX" << endl;
			cin >> findcar;
			
			if (findcar >= 0 && findcar < cars.size()) {
				cout << "car selected: " << cars.at(findcar)<<endl;
				break;
			}
			else{
				cout << "car is not available on vector index"<<endl<<endl; 
			}
			
		default:
			cout << "Select your option";
	}
	} while (ans == 1 || ans == 2 || ans == 3);
}

//==== Car Inventory System ====
//1. Add a new car
//2. Show all cars
//3. Search for a car
//4. Exit
//Choose an option : 1
//
//Enter car name : Tesla
//Car added!
//
//==== Car Inventory System ====
//1. Add a new car
//2. Show all cars
//3. Search for a car
//4. Exit
//Choose an option : 2
//
//Current inventory :
//-Tesla

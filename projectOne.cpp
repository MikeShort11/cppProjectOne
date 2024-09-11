#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> playerNums;
	vector<int> playerRtngs;

	//get inital values fro jerseys and ratings
	for (int i = 1; i < 6; ++i){
		int temp;
		cout << "enter player" << i << "'s jersey number:" << endl;
		cin >> temp;
		playerNums.push_back(temp);
		cout << "enter player" << i << "'s rating:" << endl;
		cin >> temp;
		playerRtngs.push_back(temp);	
	}

	//show roster after setting intital values
	cout << endl << "ROSTER" << endl;

	for (int i = 0; i < 5; ++i){

		cout << "Player 1 -- Jersey number: " << playerNums.at(i) << " Rating: " <<playerRtngs.at(i) << endl;
	}

	//menu loop
	while (true) {

		char input;

		// menu text
		cout << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" << endl << "o - Output roster" << endl << "q - Quit" << endl << endl << "Choose an option:" << endl;
		cin >> input;
		
		// in input is q end the loop
		if (input == 'q' || input == 'Q') {

			break;
		// show the roster if the input is o
		} else if (input == 'o' || input == 'O'){
			cout << "ROSTER" << endl;
			for (int i = 0; i < 5; ++i){
				cout << "Player 1 -- Jersey number: " << playerNums.at(i) << " Rating: " <<playerRtngs.at(i) << endl;
		}

		}

	}
	
	return 0;
	
}

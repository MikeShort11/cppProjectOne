#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GetIndex(vector<int> v, int k) {
	auto temp =  std::find(v.begin(), v.end(), k);

	if (temp == v.end()) {
		return -1;
	} else {
		return (temp - v.begin());
	}
}
int main(){

	vector<int> playerNums;
	vector<int> playerRtngs;

	//get inital values fro jerseys and ratings
	for (int i = 1; i < 6; ++i){
		int temp;
		cout << "Enter player " << i << "'s jersey number:" << endl;
		cin >> temp;
		playerNums.push_back(temp);
		cout << "Enter player " << i << "'s rating:" << endl << endl;
		cin >> temp;
		playerRtngs.push_back(temp);	
	}

	//show roster after setting intital values
	cout << "ROSTER" << endl;

	for (int i = 0; i < 5; ++i){

		cout << "Player " << i + 1 << " -- Jersey number: " << playerNums.at(i) << ", Rating: " <<playerRtngs.at(i) << endl;
	}

	//menu loop
	while (true) {

		char input;

		// menu text
		cout << endl << "MENU" << endl << "a - Add player" << endl << "d - Remove player" << endl << "u - Update player rating" << endl << "r - Output players above a rating" << endl << "o - Output roster" << endl << "q - Quit" << endl << endl << "Choose an option:" << endl;
		cin >> input;
		
		// in input is q end the loop
		if (input == 'q' || input == 'Q') {

			break;
		// show the roster if the input is o
		} else if (input == 'o' || input == 'O'){
			cout << "ROSTER" << endl;
			for (int i = 0; i < playerNums.size(); ++i){
				cout << "Player " << i + 1 << " -- Jersey number: " << playerNums.at(i) << ", Rating: " <<playerRtngs.at(i) << endl;
		}
		//add a player on input 'a'
		} else if (input == 'a' || input == 'A') {
			int temp;
			cout << "Enter a new player's jersey number:" << endl;
			cin >> temp;
			playerNums.push_back(temp);
			cout << "Enter the player's rating:" << endl;
			cin >> temp;
			playerRtngs.push_back(temp);
		// remove a player on input d
		} else if (input == 'd' || input == 'D') {
			int temp;
			cout << "Enter a jersey number:" << endl;
			cin >> temp;
			int index = GetIndex(playerNums, temp);

			playerRtngs.erase(playerRtngs.begin() + index);
			playerNums.erase(playerNums.begin() + index);
		} else if (input == 'u' || input == 'U') {
			int temp;
			int rtng;

			cout << "Enter a jersey number:" << endl;
			cin >> temp;
			cout << "Enter a new rating" << endl;
			cin >> rtng;

			int index = GetIndex(playerNums, temp);

			playerRtngs.at(index) = rtng;

		} else if (input == 'r' || input == 'R') {
			int rtng;
			cout << "Enter a Rating:" << endl;
			cin >> rtng;

			cout << "ABOVE " << rtng << endl;
			for (int i = 0; i < playerNums.size(); ++i){
				if (playerRtngs.at(i) > rtng) {
				cout << "Player " << i + 1 << " -- Jersey number: " << playerNums.at(i) << ", Rating: " <<playerRtngs.at(i) << endl;
				}
		
			}

		}
	}
	
	return 0;
	
}

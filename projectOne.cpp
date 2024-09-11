#include <iostream>

using namespace std;

int main(){

	int playerNums[5];
	int playerRtings[5];

	for (int i = 1; i < 6; ++i){
		cout << "enter player" << i << "'s jersey number:" << endl;
		cin >> playerNums[i];
		cout << "enter player" << i << "'s rating:" << endl;
		cin >> playerRtings[i];	
	}

	cout << "ROSTER" << endl;

	for (int i = 1; i < 6; ++i){

		cout << "Player 1 -- Jersey number: " << playerNums[i] << " Rating: " <<playerRtings[i] << endl;

	}
return 0;
}

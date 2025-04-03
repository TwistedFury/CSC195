#include <iostream>

using namespace std;

string strArr[24]; // Yeah, I did this in CSC110, the file has been uploaded into this repo as well

void getUserEntries() {
	for (int i = 0; i < 24; i++) {
		switch (i) {
		case 0:
			cout << "Enter an animal:\n";
			break;
		case 1:
		case 13:
			cout << "Enter a food:\n";
			break;
		case 2:
		case 7:
		case 9:
		case 10:
		case 16:
		case 17:
			cout << "Enter a noun:\n";
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 12:
		case 15:
		case 20:
		case 22:
		case 23:
			cout << "Enter a verb:\n";
			break;
		case 8:
		case 11:
			cout << "Enter a location:\n";
			break;
		case 14:
			cout << "Enter a game:\n";
			break;
		case 18:
		case 21:
			cout << "Enter a plural noun:\n";
			break;
		case 19:
			cout << "Enter a verb ending in -ing:\n";
			break;
		}
		cin >> strArr[i];
	}
}

string concatenateIt() {
	string whyDoIPutMyselfThroughThis = "If you give a(n) " + strArr[0] + " a(n) " + strArr[1] + ", he/she is going to ask for a(n) " + strArr[2] +
		            ".\nWhen you give him/her the " + strArr[3] + ", he/she will want to " + strArr[4] + ". When he/she is finished, he/she will " + strArr[5] +
		            ".\nWhen he/she is finished, he/she will " + strArr[6] + ". Then he/she will " + strArr[7] + " and " + strArr[8] + " to the " + strArr[9] +
		            ".\nSince that doesn't work out, he/she will want to go to (the) " + strArr[10] + ".\nOn the way, he/she will see a(n) " + strArr[11] +
		            " and will want a(n) " + strArr[12] + ". Then you will have to take him/her to (the) " + strArr[13] + ".\nHe/She will " + strArr[14] +
		            ".\nWhen he/she is done, he/she will ask for some " + strArr[15] + ".\nOn the way home he/she will start a game of " + strArr[16] +
		            ".\nWhen you finally get home, you'll have to " + strArr[17] + ". Then he/she will want a " + strArr[18] + ". You'll have to find a " + strArr[19] +
		            " and " + strArr[20] + ". When he/she sees the " + strArr[21] + ", he/she will start " + strArr[19] + ".\nThen he/she will " + strArr[22] +
		            " out of " + strArr[21] + ".\nOf course, when he/she is finished, he/she will want to " + strArr[23] + ". So, he/she will ask for a " + strArr[2] +
		            ".\nAnd chances are if you give him/her a " + strArr[2] + ", he/she is going to want a " + strArr[1] + '.';
	return whyDoIPutMyselfThroughThis;
}

int main() {
	getUserEntries();
	cout << concatenateIt();
}

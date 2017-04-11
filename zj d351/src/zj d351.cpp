#include <iostream>

using namespace std;

int main() {
	string str;
	bool flag = false;

	while(1) {
		getline(cin, str);
		int sum = 0;

		if(str[0] == '_' && flag) cout << endl;
		else if(str[0] == '_') flag = true;
		else {
			for(int i = 2; i < 6; i++) {
				sum += (str[i] == 'o' ? 1 : 0) << (8 - i);
			}

			for(int i = 7; i < 10; i++) {
				sum += (str[i] == 'o' ? 1 : 0) << (9 - i);
			}
			cout << (char)sum;
		}
	}
	return 0;
}

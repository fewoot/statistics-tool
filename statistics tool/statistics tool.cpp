
#include "All-Head.h"
#include "System.h"



int main() {
	double data[100];
	double statistics[4];
	stringstream ss_temp;
	UIBegin();
	do {
		data[0] = 0;
		for (int i = 1;;) {
			input(i);
			string input;
			cin >> input;
			if (input.compare("over") == 0 || input.compare("o") == 0) {
				if (data[0] == 0) {
					//notInput();
					return 0;
				} else {
					break;
				}
			} else if (input.compare("back") == 0 || input.compare("b") == 0) {
				if (data[0] <= 1) {
					backError();
				} else {
					back(--i);
					data[0]--;
				}
			} else if (judgeIfIsDouble(input) != 3) {
				//formatError();
			} else {
				data[i++] = stod(input);
				data[0]++;
			}
		}

		over(data);

		do {
			string input;
			//char input;
			cin >> input;
			if (input.compare("o") == 0) {
				break;
			} else if (judgeIfIsInt(input) == 0) {
				formatError();
			}else if (stoi(input)>data[0]) {
				overTheMaxNumber();
			} else {
				data[stoi(input)] = modify(stoi(input));
				over(data);
			}
		} while (1);
		cout << "  " << endl;
		cout << "算术平均值是：	       " << setiosflags(ios::fixed) << setprecision(4) <<arithmeticMean(data)<< endl;
		cout << "算术平均误差是：       " <<setiosflags(ios::fixed) << setprecision(4) <<arithmeticAverageDeviation(data)<< endl;
		cout << "标准误差是：	       " <<setiosflags(ios::fixed) << setprecision(4) <<standardError(data)<< endl;
		cout << "算术平均值的标准偏差： " <<setiosflags(ios::fixed) << setprecision(4) <<standardDeviation(data)<< endl;
		cout << "  " << endl;
		//cout << "" << endl;
		//cout << "" << endl;
		//cout << "" << endl;
		UIOver();
		char input;
		cin >> input;
		if (input != 'r') {
			return 0;
		}
	} while (1);
}
#include "Transformation.h"
#include "System.h"
#include "All-Head.h"

double stringToDouble(string ss) {
	//stringstream temp;
	return stod(ss);
}

int judgeIfIsDouble(string temp) {
	int temp2 = 0;
	for (int i = 0; i < temp.length(); ++i) {
		if (temp[i] == '-') {
			if (i != 0) {
				formatError();
				return 1;
			}
		}else if (temp[i]=='.') {
			if (i == 0 || i== (temp.length()-1)) {
				formatError();
				return 1;
			}
			if (temp2 == 0) {

			} else {
				formatError();
				return 1;
			}
			temp2++;
		}else if(temp[i]<'0' || temp[i]>'9') {
			formatError();
			return 0;
		} 	
	}
	
	return 3;
}

int judgeIfIsInt(string temp) {
	for (int i = 0; i < temp.length(); ++i) {
		if (temp[i]<'0' || temp[i]>'9') {
			return 0;
		} 
	}
	return 3;
}
//void doubleToString() {
//	static string 
//}
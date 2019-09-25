#include "Algorithm.h"
#include "System.h"

//算术平均值
double arithmeticMean(double data[]) {
	double sum = 0;
	for (int i = 1; i <= data[0]; i++) {
		sum += data[i];
	}
	return (sum / data[0]);
}

//算术平均误差
double arithmeticAverageDeviation(double data[]) {
	double a_a_d = arithmeticMean(data);
	double temp = 0;
	for (int i = 1; i <= data[0]; i++) {
		temp += abs(data[i] - a_a_d);
	}
	return (temp / data[0]);
}

//标准误差
double standardError(double data[]) {
	if (data[0] == 1) {
		return 0;
	} else {
		double aver_fun = arithmeticMean(data);
		double temp = 0;
		for (int i = 1; i <= data[0]; ++i) {
			temp += (data[i] - aver_fun) * (data[i] - aver_fun);
		}
		return (sqrt(temp / (data[0] - 1)));
	}
}

//算术平均值的标准偏差
double standardDeviation(double data[]) {
	if (data[0] == 1) {
		return 0;
	} else {
		double aver_fun;
		aver_fun = arithmeticMean(data);
		double temp = 0;
		for (int i = 1; i <= data[0]; ++i) {
			temp = temp + ((data[i] - aver_fun) * (data[i] - aver_fun));
		}
		return (sqrt(temp / ((data[0] - 1) * data[0])));
	}
}


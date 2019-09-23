#include <stdio.h>
#include <string.h>
#include <math.h>

int zifuchuan_to_shuzi_simple(int length, char shuru[]) {                 //++函数序号：14
	int sum = 0;                                                          //++作用：将 “数字字符串”转换为 “数字”
	int temp = 1;                                                         //++需要：字符串长度、字符串
	for (int i = (length - 1); i >= 0; --i) {                                     //++
		sum = sum + (temp * (shuru[i] - '0'));                                //++另外：这个函数是简化的版本，规定字符串中无其他符号（包括负号）
		temp = temp * 10;                                                 //++
	}                                                                   //++返回：换算后的数字
	return sum;                                                         //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！！

double arithmetic_mean(double data[], int n) {                        //算术平均值
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + data[i];
	}
	return (sum / n);
}

double zifuchuan_to_shuzi(int length, char shuru_char[]) {                 //++函数序号：7
	double temp = 1;                                                       //++作用：将一个 “数字字符串” 转换为 “数字”
	double sum = 0;                                                        //++需要：字符串长度、字符串
	int temp_1 = 0;                                                      //++
	for (int i = 0; i < length; ++i) {                                           //++
		if (shuru_char[i] == '.') {                                          //++说明：在开始对字符串中的 ‘.’进行检测，进行整数、小数计算
			temp_1 = i;                                                  //++
			break;                                                       //++
		}                                                                //++
	}                                                                    //++
	if (temp_1 == 0) {                                                       //++
		if (shuru_char[0] == '-') {                                          //++
			for (int i = (length - 1); i > 0; --i) {                               //++
				sum = sum + (temp * (shuru_char[i] - '0'));                    //++
				temp = temp * 10;                                          //++
			}                                                            //++
			sum = -sum;                                                  //++
		} else {                                                           //++
			for (int i = (length - 1); i >= 0; --i) {                              //++
				sum = sum + (temp * (shuru_char[i] - '0'));                    //++
				temp = temp * 10;                                          //++
			}                                                            //++
		}                                                                //++
	} else {                                                               //++
		if (shuru_char[0] == '-') {                                          //++
			for (int i = (temp_1 - 1); i > 0; i--) {                               //++
				sum = sum + (temp * (shuru_char[i] - '0'));                    //++说明：对于小数的整数部分与下一句一样，小数部分从左到右依次乘以因数，每称一次因数变为原先的 0.1倍，依次累加
				temp = temp * 10;                                          //++说明：对于整数从每一个字符串的末尾开始乘以因数，每计算一次因数变为 10倍，依次累加
			}                                                            //++
			temp = 0.1;                                                  //++
			for (int i = (temp_1 + 1); i < length; ++i) {                          //++
				sum = sum + (temp * (shuru_char[i] - '0'));                    //++
				temp = temp * 0.1;                                         //++
			}                                                            //++
			sum = -sum;                                                  //++
		} else {                                                           //++
			for (int i = (temp_1 - 1); i >= 0; i--) {                              //++
				sum = sum + (temp * (shuru_char[i] - '0'));                    //++
				temp = temp * 10;                                          //++
			}                                                            //++
			temp = 0.1;                                                  //++
			for (int i = (temp_1 + 1); i < length; ++i) {                          //++
				sum = sum + (temp * (shuru_char[i] - '0'));                    //++
				temp = temp * 0.1;                                         //++
			}                                                            //++
		}                                                                //++
	}                                                                    //++返回：换算后的数字（浮点数）
	return sum;                                                          //++coded by fewoot
}                                                                        //++此函数截止于此！！！！！！！！！！！！！！！！！！

double arithmetic_mean_deviation(double data[], int n) {              //算术平均偏差
	double aver_fun;
	aver_fun = arithmetic_mean(data, n);
	double temp = 0;
	for (int i = 0; i < n; ++i) {
		if ((data[i] - aver_fun) >= 0) {
			temp = temp + (data[i] - aver_fun);
		} else {
			temp = temp + (aver_fun - data[i]);
		}
	}
	return (temp / n);
}



double standard_error(double data[], int n) {                         //标准误差
	double aver_fun;
	aver_fun = arithmetic_mean(data, n);
	double temp = 0;
	for (int i = 0; i < n; ++i) {
		temp = temp + ((data[i] - aver_fun) * (data[i] - aver_fun));
	}
	return (sqrt((temp / n)));
}

double standard_deviation(double data[], int n) {                     //标准偏差
	if (n == 1) {
		return 0;
	} else {
		double aver_fun;
		aver_fun = arithmetic_mean(data, n);
		double temp = 0;
		for (int i = 0; i < n; ++i) {
			temp = temp + ((data[i] - aver_fun) * (data[i] - aver_fun));
		}
		return (sqrt((temp / (n - 1))));
	}
}

double standard_deviation_of_arithmetic_mean(double data[], int n) {                     //算术平均值的标准偏差
	if (n == 1) {
		return 0;
	} else {
		double aver_fun;
		aver_fun = arithmetic_mean(data, n);
		double temp = 0;
		for (int i = 0; i < n; ++i) {
			temp = temp + ((data[i] - aver_fun) * (data[i] - aver_fun));
		}
		return (sqrt(temp / ((n - 1) * n)));
	}
}

void xuegai(double shuju[], int weizhi) {
	char shuju_char[10000];
	int temp;
	for (int i = (weizhi - 1); i < weizhi; ++i) {
		fflush(stdin);
		printf("Please enter the NO.%d number:", (i + 1));                     //提示输入
		gets(shuju_char);
		fflush(stdin);
		temp = strlen(shuju_char);
		if (temp == 0) {
			printf("\n!!!   You haven't entered any numbers yet   !!!\n\n");            //没输入而按下回车报错
			i--;
		} else {
			if (shuju_char[0] == 'b' && shuju_char[1] == 'a' && shuju_char[2] == 'c' && shuju_char[3] == 'k') {       //以下
			    // if(i==0){
			    //     printf("\n!!!   No data has been stored yet   !!!\n\n");
			    //     i--;
			    // }else{
			    //     printf("\n------Data fallback, please re-enter------\n\n");
			    //     i--;
			    //     i--;
			    // }                                                                                           //以上检测输入是否为back
				printf("\n!!!   Sorry,this command cann't be uesd here   !!!\n\n");
				i--;
			} else {
				int temp_1 = 0;
				if (shuju_char[0] == '-') {                                     //检测不合法输入时可以有一个负号
					temp_1--;
				}
				for (int n = 1; n < temp; ++n) {
					if (shuju_char[n] == '.') {                                 //检测不合法输入时可以有一个小数点
						temp_1--;
						break;
					}
				}
				for (int n = 0; n < temp; ++n) {
					if (shuju_char[n] >= '0' && shuju_char[n] <= '9') {
						//认为是合法输入
					} else {
						temp_1++;
					}
				}
				if (temp_1 != 0) {
					printf("\n!!!   Input format error   !!!\n!!!   Please enter again   !!!\n\n");     //不合法输入报错
					i--;
				} else {
					shuju[i] = zifuchuan_to_shuzi(temp, shuju_char);         //输入完成，转换数字
				}
			}
		}
	}
}



int main() {                                                                                       //以下
	printf("Welcome to use this statistical calculator\n");
	printf("This calculator is coded by fewoot i.e yuan**\n");
	printf("Usage method:");
	printf(" enter \"back\" to re-enter\n");
	printf("Reminder: please enter numbers, or system will prompt\n");
	//以上都是欢迎词
	int geshu;
	for (int temp = 0; temp == 0;) {
		printf("\nPlease enter the number of data:");
		char temp_char[100];
		gets(temp_char);
		int length;
		int temp_1 = 0;;
		length = strlen(temp_char);
		for (int i = 0; i < length; ++i) {                                                      //以下
			if (temp_char[i] > '0' && temp_char[i] <= '9') {

			} else {
				temp_1++;
			}
		}                                                                               //检查输入是否为正整数
		if (length == 0) {
			printf("\n!!!   You haven't entered any numbers yet   !!!\n");              //没输入而按空格报错
		} else {
			if (temp_1 != 0) {
				printf("\n!!!   Input format error   !!!\n!!!   You should enter a positive integer   !!!\n");      //输入不合法报错
			} else {
				geshu = zifuchuan_to_shuzi_simple(length, temp_char);                    //输入结束，得到个数
				temp++;
			}
		}
	}

	//scanf("%d",&geshu);
	double shuju[1000];
	char shuju_char[10000];
	int temp_fin = 0;
	for (int i = 0; i <= geshu; i++) {
		if (i == geshu) {
			if (temp_fin == 0) {                                                        //以下
				for (int i = 0; i < geshu; ++i) {
					printf("\nThe NO.%d number = %f", (i + 1), shuju[i]);
				}                                                                   //以上整理输入的数
				printf("\n------Please confirm the data------\n------If there is no mistake, please press \"Enter\"------\n------If there is mistakes, Please enter the corresponding ordinal number of the data------\n");
			}                                                                       //提示
			char temp[4];
			temp_fin = 1;
			gets(temp);
			int temp_1;
			int temp_2 = 0;
			temp_1 = strlen(temp);
			int temp_3;
			temp_3 = zifuchuan_to_shuzi_simple(temp_1, temp);
			if (temp_3 > geshu) {
				printf("\n!!!   Over the maximum serial number, please re-enter   !!!\n\n");
				temp_fin = 1;
				i--;
			} else {
				for (int i = 0; i < temp_1; ++i) {
					if (temp[i] >= '0' && temp[i] <= '9') {

					} else {
						temp_2 = 1;
					}
				}
				if (temp_1 == 0) {
					//认为按下回车
				} else if (temp_2 == 0) {
					xuegai(shuju, temp_3);
					temp_fin = 0;
					i--;
				} else {
					printf("\n!!!   Unknown instructions, please follow the reminder to re-enter   !!!\n");     //不合法命令报错
					i--;
				}
			}
		} else {
			int temp;
			fflush(stdin);
			printf("Please enter the NO.%d number:", (i + 1));                     //提示输入
			gets(shuju_char);
			fflush(stdin);
			temp = strlen(shuju_char);
			if (temp == 0) {
				printf("\n!!!   You haven't entered any numbers yet   !!!\n\n");            //没输入而按下回车报错
				i--;
			} else {
				if (shuju_char[0] == 'b' && shuju_char[1] == 'a' && shuju_char[2] == 'c' && shuju_char[3] == 'k') {       //以下
					if (i == 0) {
						printf("\n!!!   No data has been stored yet   !!!\n\n");
						i--;
					} else {
						printf("\n------Data fallback, please re-enter------\n\n");
						i--;
						i--;
					}                                                                                           //以上检测输入是否为back
				} else {
					int temp_1 = 0;
					if (shuju_char[0] == '-') {                                     //检测不合法输入时可以有一个负号
						temp_1--;
					}
					for (int n = 1; n < temp; ++n) {
						if (shuju_char[n] == '.') {                                 //检测不合法输入时可以有一个小数点
							temp_1--;
							break;
						}
					}
					for (int n = 0; n < temp; ++n) {
						if (shuju_char[n] >= '0' && shuju_char[n] <= '9') {
							//认为是合法输入
						} else {
							temp_1++;
						}
					}
					if (temp_1 != 0) {
						printf("\n!!!   Input format error   !!!\n!!!   Please enter again   !!!\n\n");     //不合法输入报错
						i--;
					} else {
						shuju[i] = zifuchuan_to_shuzi(temp, shuju_char);         //输入完成，转换数字
					}
				}
			}
		}
	}

	printf("\n          Arithmetic Mean = %.04f\n", arithmetic_mean(shuju, geshu));                       //以下
	printf("Arithmetic Mean Deviation = %.04f\n", arithmetic_mean_deviation(shuju, geshu));
	printf("           Standard Error = %.04f\n", standard_error(shuju, geshu));
	printf("       Standard Deviation = %.04f\n", standard_deviation(shuju, geshu));
	printf("    S-D-O Arithmetic Mean = %.04f\n", standard_deviation_of_arithmetic_mean(shuju, geshu));   //以上计算结果
	printf("\n Thank you for using this. Have a nice day.\n");                                          //结束语

	//It is base code,under this
	//check your code, you always forget "&"!
	system("pause");
	return 0;
}
#include "System.h"
#include "UI.h"
//using namespace std;

void UIBegin() {
	cout << "欢迎使用这个统计程序" << endl;
	cout << "本程序由 fewoot-即苑** 编写    (￣▽￣)   " << endl;
	cout << "如果你发现任何bug，或者有什么想法想要交流，欢迎联系我:1945811929@qq.com" << endl;
	cout << "使用方法：" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "请输入所有数据，每个数据之间按下回车" << endl;
	cout << "如果上一个数据输入错误，请输入“b”或“back”，进行修改" << endl;
	cout << "如果输入完成，请输入“o”或“over”" << endl;
	cout << "在最后会显示你输入的所有数据，如有错误请输入对应的序号，否则按下回车开始计算" << endl;
}

void UIOver() {
	cout << "计算完毕" << endl;
	cout << "感谢你的使用" << endl;
	cout << "输入“r”再次运行，或者按下任意键退出" << endl;
	cout << "ヾ(￣▽￣)" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
}

void back(int i) {
	//string temp;
	cout << "" << endl;
	cout << "请重置第" <<i<<"个数据:";
	//cin >> temp;
	//return temp;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;

}

void input(int i) {
	cout << "请输入第" <<i<<"个数据"<< endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;

}

void over(double data[]) {
	cout << "在计算之前，请您检查数据：" << endl;
	for (int i=1;i<=data[0];i++) {
		cout << "第" <<i<<"个数据为："<<data[i]<< endl;
		//cout << "" << endl;
	}
	cout << "如果有错误，请输入对应的序号" << endl;
	cout << "如果没有错误，请输入“o”" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;

}

double modify(int i) {
	double temp;
	cout << "请修改第" <<i<<"个数据";
	cin >> temp;
	return temp;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;

}

void standardFormat() {

}

void notInput() {
	cout << "" << endl;
	cout << "你还没有输入任何东西呐" << endl;
	cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;

}

void backError() {
	cout << "" << endl;
	cout << "已经没有上一个了哦     _(:з)∠)_" << endl;
	cout << "" << endl;

}

void colonFormatError() {
	cout << "" << endl;
	cout << "冒号格式错误" << endl;
	cout << "" << endl;

}

void formatError() {
	cout << "" << endl;
	cout << "格式错误，请输入正确格式的数字" << endl;
	cout << "" << endl;

}

void overTheMaxNumber() {
	cout << "" << endl;
	cout << "错误，没有这个序号的数字" << endl;
	cout << "" << endl;

}

//void results() {
//	cout << "算术平均值是：  " <<<< endl;
//	cout << "" << endl;
//	cout << "" << endl;
//	cout << "" << endl;
//	cout << "" << endl;
//	cout << "" << endl;
//	cout << "" << endl;
//	cout << "" << endl;
//
//}
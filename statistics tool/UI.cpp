#include "System.h"
#include "UI.h"
//using namespace std;

void UIBegin() {
	cout << "��ӭʹ�����ͳ�Ƴ���" << endl;
	cout << "�������� fewoot-��Է** ��д    (������)   " << endl;
	cout << "����㷢���κ�bug��������ʲô�뷨��Ҫ��������ӭ��ϵ��:1945811929@qq.com" << endl;
	cout << "ʹ�÷�����" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "�������������ݣ�ÿ������֮�䰴�»س�" << endl;
	cout << "�����һ������������������롰b����back���������޸�" << endl;
	cout << "���������ɣ������롰o����over��" << endl;
	cout << "��������ʾ��������������ݣ����д����������Ӧ����ţ������»س���ʼ����" << endl;
}

void UIOver() {
	cout << "�������" << endl;
	cout << "��л���ʹ��" << endl;
	cout << "���롰r���ٴ����У����߰���������˳�" << endl;
	cout << "�d(������)" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
}

void back(int i) {
	//string temp;
	cout << "" << endl;
	cout << "�����õ�" <<i<<"������:";
	//cin >> temp;
	//return temp;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;

}

void input(int i) {
	cout << "�������" <<i<<"������"<< endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;

}

void over(double data[]) {
	cout << "�ڼ���֮ǰ������������ݣ�" << endl;
	for (int i=1;i<=data[0];i++) {
		cout << "��" <<i<<"������Ϊ��"<<data[i]<< endl;
		//cout << "" << endl;
	}
	cout << "����д����������Ӧ�����" << endl;
	cout << "���û�д��������롰o��" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;

}

double modify(int i) {
	double temp;
	cout << "���޸ĵ�" <<i<<"������";
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
	cout << "�㻹û�������κζ�����" << endl;
	cout << "" << endl;
	//cout << "" << endl;
	//cout << "" << endl;

}

void backError() {
	cout << "" << endl;
	cout << "�Ѿ�û����һ����Ŷ     _(:��)��)_" << endl;
	cout << "" << endl;

}

void colonFormatError() {
	cout << "" << endl;
	cout << "ð�Ÿ�ʽ����" << endl;
	cout << "" << endl;

}

void formatError() {
	cout << "" << endl;
	cout << "��ʽ������������ȷ��ʽ������" << endl;
	cout << "" << endl;

}

void overTheMaxNumber() {
	cout << "" << endl;
	cout << "����û�������ŵ�����" << endl;
	cout << "" << endl;

}

//void results() {
//	cout << "����ƽ��ֵ�ǣ�  " <<<< endl;
//	cout << "" << endl;
//	cout << "" << endl;
//	cout << "" << endl;
//	cout << "" << endl;
//	cout << "" << endl;
//	cout << "" << endl;
//	cout << "" << endl;
//
//}
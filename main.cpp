#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>

#include  "Human.h"


//�������:
//��ô����ʾ�˵�"Ѫ��"?
//Ѫ�Ϳ����޸���?

void test() {
	Human tmp1;
	Human tmp2;

}

void showMsg() {
	cout << Human::gethumanCount() << endl;
}

int main(void) {
	const Human rock;
	rock.description();

	system("pause");
	return 0;
}
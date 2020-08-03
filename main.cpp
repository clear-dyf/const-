#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>

#include  "Human.h"


//需求分析:
//怎么样表示人的"血型"?
//血型可以修改吗?

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
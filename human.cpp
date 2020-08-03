#include "Human.h"
#include <iostream>

//����ľ�̬���ݽ��г�ʼ��
int Human::humanCount = 0;

Human::Human():bloodType("A"){
	name = "������";
	age = 18;
	salary = 30000;
	humanCount++;
}

Human::Human(int age, int salary,string bldType):bloodType(bldType) {
	cout << "�����Զ���Ĺ��캯��" << endl;
	this->age = age;      //this��һ�������ָ�룬ָ�����������
	this->salary = salary;
	name = "����";

	addr = new char[64];
	strcpy_s(addr, 64, "China");
	humanCount++;
}

Human::Human(const Human& man) {
	cout << "�����Զ���Ŀ������캯��" << "������" << &man
		<< " ������" << this << endl;

	age = man.age;      //this��һ�������ָ�룬ָ�����������
	salary = man.salary;
	name = man.name;
	// ��ȿ���
	addr = new char[64];
	strcpy_s(addr, 64, man.addr);
	humanCount++;
}


Human& Human::operator=(const Human& man) {
	cout << "����" << __FUNCTION__ << endl;
	if (this == &man) {
		return *this; //����ǲ��Ƕ��Լ���ֵ������ h1 = h1;
	}

	// ����б�Ҫ����Ҫ���ͷ��Լ�����Դ����̬�ڴ棩
	//delete addr;
	//addr = new char[ADDR_LEN];

	// ���
	strcpy_s(addr, ADDR_LEN, man.addr);

	// �����������ݳ�Ա
	name = man.name;
	age = man.age;
	salary = man.salary;

	// ���ظö���������ã� �Ա�����ʽ������������ a = b = c;
	return *this;
}


void Human::eat() {
	cout << "��ը������ơ�ƣ�" << endl;
}

void Human::sleep() {
	cout << "������˯��!" << endl;
}

void Human::play() {
	cout << "���ڳ���! " << endl;
}

void Human::work() {
	cout << "���ڹ���..." << endl;
}

string Human::getName() {
	return name;
}

int Human::getAge() {
	return age;
}

int Human::getSalary() {
	return salary;
}

void Human::setAddr(const char* newAddr) {
	if (!newAddr) {
		return;
	}

	strcpy_s(addr, 64, newAddr);
}

const char* Human::getAddr() {
	return addr;
}

// �����ͨ��Ա����������ֱ�ӷ��ʾ�̬��Ա���ɶ���д��

int Human::gethumanCount() {
	return humanCount;
}

void Human::description() const {

	cout << " age:" << age
		<< " salary: " << salary
		<< " bloodType: " << bloodType << endl;

}
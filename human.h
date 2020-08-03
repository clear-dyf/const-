#pragma once
#include <string>

using  namespace std;

#define ADDR_LEN  64

class Human {
public:
	Human();
	Human(int age, int salary, string bldType);
	Human(const Human&);  //�����忽�����캯���������������ɡ��ϳɵĿ������캯����
	Human& operator=(const Human&);

	void eat();
	void sleep();
	void play();
	void work();

	string getName();
	int getAge();
	int getSalary();
	void setAddr(const char* newAddr);
	const char* getAddr();
	void description() const;
	//��ľ�̬��Ա����
	static int gethumanCount();

private:
	string name = "Unknown";
	int age = 28;
	int salary;
	char* addr;

	const string bloodType; 

	static int humanCount;
};
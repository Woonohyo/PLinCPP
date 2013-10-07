#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <cctype>
using namespace std;

// 2번 문제
void helloWorld(void) {
	std::cout << "Hello World!" << std::endl;
}

// 3번 문제
void sumToN(int n) {
	int result = 0;

	for ( int i = 1; i <= n; i++ )
		result += i;

	std::cout << result << std::endl;
}

// 4번 문제
void switcher(char ch) {
	switch(ch) {
	case 'A' : std::cout << 1 << std::endl; break;
	case 'B' : std::cout << 2 << std::endl; break;
	case 'C' : std::cout << 3 << std::endl; break;
	default : std::cout << 99 << std::endl; break;
	}
}

// 5번 문제
class Animal {
private:
	string name;
	char sex;
	int age;
	int height;
	int weight;
public:
	void walk();
	void eat();
	void sleep();
	
};

class Object {
private:
	int height;
	int width;
	int length;
	string color;
public:
	string setColor();
	string setSize(int h, int w, int l);
};

class Human : public Animal {
private:
	string race;
public:
	void feeding();
	void look();
	void ride();
	void sit();
};

class Pet : public Animal {
private:
	string breeds;
public:
protected:
};

class Dog : public Pet {
private:
	string color;
public:
	void bowwow();
};

class Cat : public Pet {
private:
	string color;
public:
	void meow();
};

class Desk : public Object {
private:
	string shape;
public:
	string setColor();
	
};

class Chair : public Object {
private:
	string type;
public:
	string setColor();
};

class Car : public Object {
private:
	string model;
	string color;
	int displacement;
	bool automatic;
	int numOfDoor;
	int speed;
public:
	int getModel();
	int getSpeed();
	bool isAutomatic();
	int getDoorNum();
	int getDisplacement();
};

// 6번 문제
class Lorem {
};

// 9번 문제
class Character {
private:
	char ID[16];
	char variousStat;
	int level;
	int hp;
	int mp;
public:
	void move();
	void openInven();
	void closeInven();
	void logout();
};

class Inventory {
private:
	int invSize;
public:
	void findItem();
	void useItem();
	void delItem();
	void movItem();
	void selectItem();
};

class Item {
private:
	char name[20];
	int quantity;
public:
	void info();
};

// 10번 문제
long factorial(int n) {
	if ( n == 1 )
		return 1;
	return n * factorial(n - 1);
}

int main(void) {

	helloWorld();

	sumToN(100);

	char ch;
	std::cout << "대문자 알파벳을 입력하세요. : ";
	std::cin >> ch;
	switcher(ch);

	int factoN;
	std::cout << "팩토리얼을 계산할 숫자를 입력해주세요. : ";
	std::cin >> factoN;
	std::cout << factorial(factoN) << std::endl;

	return 0;
}

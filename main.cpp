#include <iostream>
#include <string>
#include <vector>
#include "Point.h"
#include "Square.h"
using namespace std;

int main() {
	int num;
	cin >> num;
	Square** s = new Square * [num];
	for (int i = 0; i < num; i++) {
		
		string name;
		int x;
		int y;
		int side;
		cin >> name >> x >> y >> side;
		s[i] = new Square(name, x, y, side);
		s[i]->setArea(side);
	}

	cout << "\nSquares in increasing order of area " << endl;
	for (int i = 1; i < num; i++) {
		for (int j = 1; j < num; j++) {
			if (s[j - 1]->getArea() >= s[j]->getArea()) {
				Square* temp = s[j - 1];
				s[j - 1] = s[j];
				s[j] = temp;
			}
		}
	}
	for (int j = 0; j < num; j++) {
		cout << s[j]->getName() << "(" << s[j]->getX() << " , " << s[j]->getY() << ")" << ",side = " <<
			s[j]->getSide() << ", area = " << s[j]->getArea() << endl;
	}

	cout << "\nSquares in increasing order of max x - coordinate " << endl;
	for (int i = 1; i < num; i++) {
		for (int j = 1; j < num; j++) {
			int x1 = s[j - 1]->getX() + s[j - 1]->getSide();
			s[j - 1]->setX(x1);
			int x2 = s[j]->getX() + s[j]->getSide();
			s[j]->setX(x2);
			if (x1>= x2) {
				Square* temp = s[j - 1];
				s[j - 1] = s[j];
				s[j] = temp;
			}
		}
	}
	for (int j = 0; j < num; j++) {
		cout << s[j]->getName() << "(" << s[j]->getX() << " , " << s[j]->getY() << ")" << ",side = " <<
			s[j]->getSide() << ", area = " << s[j]->getArea() << endl;
	}
	
	cout << "\nSquares in increasing order of max y - coordinate " << endl;
	for (int i = 1; i < num; i++) {
		for (int j = 1; j < num; j++) {
			int x1 = s[j - 1]->getY() + s[j - 1]->getSide();
			s[j - 1]->setY(x1);
			int x2 = s[j]->getY() + s[j]->getSide();
			s[j]->setY(x2);
			if (x1 >= x2) {
				Square* temp = s[j - 1];
				s[j - 1] = s[j];
				s[j] = temp;
			}
		}
	}
	for (int j = 0; j < num; j++) {
		cout << s[j]->getName() << "(" << s[j]->getX() << " , " << s[j]->getY() << ")" << ",side = " <<
			s[j]->getSide() << ", area = " << s[j]->getArea() << endl;
	}
	for (int i = 0; i < num; i++) {
		delete s[i];
	}
	delete[] s;
}	
	/*Squares in increasing order of area
		S2(-2, -5) side = 2, area = 4
		S1(1, 2) side = 3, area = 9
		S5(40, -30) side = 4, area = 16
		S3(15, 20) side = 5, area = 25
		S4(100, -10) side = 10, area = 100

		Squares in increasing order of max x - coordinate
		S2(0, -5) side = 2, area = 4
		S1(4, 2) side = 3, area = 9
		S3(20, 20) side = 5, area = 25
		S5(44, -30) side = 4, area = 16
		S4(110, -10) side = 10, area = 100

		Squares in increasing order of max y - coordinate
		S5(40, -26) side = 4, area = 16
		S2(-2, -3) side = 2, area = 4
		S4(100, 0) side = 10, area = 100
		S1(1, 5) side = 3, area = 9
		S3(15, 25) side = 5, area = 25*/


		//Squares in increasing order of max y - coordinate
		//S5(40, -26) side = 4, area = 16
		//S2(-2, -3) side = 2, area = 4
		//S4(100, 0) side = 10, area = 100
		//S1(1, 5) side = 3, area = 9
		//S3(15, 25) side = 5, area = 25
	

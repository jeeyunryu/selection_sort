#include <iostream>

using namespace std;

int main() {
	int myArr[10] = { 8, 3, 1, 2, 9, 4, 2, 7, 5, 6 };
	
	int index;
	
	for (int i = 0; i < 10; i++) {
		int min = myArr[i]; //왜 이렇게 하면 안되는 걸까? => if myArr[i] is the minimum index can not be redefined!
		//해결 방법
		//1. min에 임의의 큰 값을 저장한다
		//2. min과 비교하는 조건문에서 등호를 추가한다
		for (int j = i; j < 10; j++) {
			if (min >= myArr[j]) {
				min = myArr[j];
				index = j;
			}
		}
		int temp = myArr[i];
		myArr[i] = min;
		myArr[index] = temp;
	}
	for (int i = 0; i < 10; i++) {
		cout << myArr[i] << " ";
	}
	cout << endl;

}
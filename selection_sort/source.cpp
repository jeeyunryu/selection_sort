#include <iostream>

using namespace std;

int main() {
	int myArr[10] = { 8, 3, 1, 2, 9, 4, 2, 7, 5, 6 };
	
	int index;
	
	for (int i = 0; i < 10; i++) {
		int min = myArr[i]; //�� �̷��� �ϸ� �ȵǴ� �ɱ�? => if myArr[i] is the minimum index can not be redefined!
		//�ذ� ���
		//1. min�� ������ ū ���� �����Ѵ�
		//2. min�� ���ϴ� ���ǹ����� ��ȣ�� �߰��Ѵ�
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
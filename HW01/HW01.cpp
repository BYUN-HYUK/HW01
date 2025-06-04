#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// �迭�� ���ڷ� �Ѱ� �޾� �迭 ���ҵ��� �հ踦 ��ȯ�ϴ� �Լ� ����
int getSum(const vector<int>& arr) {
	int sum = 0;
	for (int num : arr) {
		sum += num;
	}
	return sum;
}
// �迭�� ���ڷ� �Ѱ� �޾� �迭 ���ҵ��� ����� ��ȯ�ϴ� �Լ� ����
double getAverage(const vector<int>& arr) {
	if (arr.empty()) {
		return 0.0;
	}
	int sum = getSum(arr);
	return static_cast<double>(sum) / arr.size();
}

int main() {
	vector<int> numbers(5);
	cout << "���� 5���� �Է��Ͻÿ� : " << endl;

	// ���� 5�� �Է� �ޱ�
	// �Է� ���� 5�� �迭�� ����
	for (int i = 0; i < 5; i++) {
		cout << "����" << i + 1 << ": ";
		while (!(cin >> numbers[i])) {
			cout << "�߸��� �� �Է��Դϴ�. ���ڸ� �Է��Ͻÿ� : ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}


	cout << " �Էµ� ���� : ";
	for (int num : numbers) {
		cout << num << " ";
	}
	cout << endl;
	
	// �迭�� ����� ���ڵ��� �հ�� ��� ���
	int totalSum = getSum(numbers);
	double averageValue = getAverage(numbers);

	// ������ ���� �հ� �Լ��� ��� �Լ��� ȣ���Ͽ� �հ�� ��� ���
	cout << "�հ� : " << totalSum << endl;
	cout << "��� : " << averageValue << endl;

	return 0;
}


// ����ڰ� �Է��� ���� �迭�� �����ϴ� ���α׷� (�������� ��������)
// ���뼺 ����� �ڵ� (n�� �Է½� ����ִ� ���� �ڵ����� 0���� ���)
// �ߺ��ڵ� �ּ�ȭ�ؼ� �ڵ� �ۼ�
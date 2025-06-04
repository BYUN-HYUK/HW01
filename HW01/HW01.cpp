#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// 배열을 인자로 넘겨 받아 배열 원소들의 합계를 반환하는 함수 구현
int getSum(const vector<int>& arr) {
	int sum = 0;
	for (int num : arr) {
		sum += num;
	}
	return sum;
}
// 배열을 인자로 넘겨 받아 배열 원소들의 평균을 반환하는 함수 구현
double getAverage(const vector<int>& arr) {
	if (arr.empty()) {
		return 0.0;
	}
	int sum = getSum(arr);
	return static_cast<double>(sum) / arr.size();
}

int main() {
	vector<int> numbers(5);
	cout << "숫자 5개를 입력하시오 : " << endl;

	// 숫자 5개 입력 받기
	// 입력 숫자 5개 배열에 저장
	for (int i = 0; i < 5; i++) {
		cout << "숫자" << i + 1 << ": ";
		while (!(cin >> numbers[i])) {
			cout << "잘못된 값 입력입니다. 숫자를 입력하시오 : ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}


	cout << " 입력된 숫자 : ";
	for (int num : numbers) {
		cout << num << " ";
	}
	cout << endl;
	
	// 배열에 저장된 숫자들의 합계와 평균 계산
	int totalSum = getSum(numbers);
	double averageValue = getAverage(numbers);

	// 위에서 만든 합계 함수와 평균 함수를 호출하여 합계와 평균 출력
	cout << "합계 : " << totalSum << endl;
	cout << "평균 : " << averageValue << endl;

	return 0;
}


// 사용자가 입력한 숫자 배열을 정렬하는 프로그램 (오름차순 내림차순)
// 재사용성 고려한 코드 (n개 입력시 비어있는 수는 자동으로 0으로 출력)
// 중복코드 최소화해서 코드 작성
//1211201118 林優花
//整数を入力するたびにスペースを入力してください。指示の通り最後には0を入力してください。listの使い方がわかりませんでした。vecterは今までも何度か使っていましたがlistに関しては構造を理解するものの、どのように利用すれば効果的なのかわかりませんでした。
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  cout << "enter integer value.\nenter 0 after the last number." << endl;
  vector<int> number, number_average;
  int num = 0;
	double sum = 0, average = 0;
	
	do {
		cin >> num;
		sum += (double)num; 
	  number.push_back(num);
	} while (num != 0);
  number.pop_back(); // delete last
	average = sum / (double)number.size(); 
  cout << "average = " << average << endl;	
	for (const auto& k : number) {
		number_average.push_back(abs(k - average));
	}	
	vector<int>::iterator iter = min_element(number_average.begin(), number_average.end());
  size_t index = distance(number_average.begin(), iter);
  for (int i = 0; i < number_average.size(); i++) {
		if (number_average[index] == number_average[i]) {
			cout << "minimum element's index = " << i+1 << endl;
		}
	}
	return 0;
}	
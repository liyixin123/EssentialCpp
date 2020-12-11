#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>
#include <array>
void exercise1_5_string() {
  std::cout << "What's your name? ";
  std::string name;
//const char* name[10];
  std::cin >> name;
  if (name.size() > 2) {
	std::cout << " Hello " << name << " Nice to meet you\n";
  } else {
	std::cout << "Please enter two more Length \n";
  }

}
void exercise1_5_C_style() {
  std::cout << "What's your name? ";
  const int sz = 20;
  char name[sz];
  std::cin >> std::setw(sz) >> name;
  if (strlen(name) > 2) {
	std::cout << " Hello " << name << " Nice to meet you\n";
  } else {
	std::cout << "Please enter two more Length \n";
  }
}
void ex1_6() {
  int inputVal;
  std::vector<int> v;
  const int sz = 50;
  std::array<int, 50> av{0};
  int index = 0;
  while (std::cin >> inputVal) {
	v.push_back(inputVal);
	av[index++] = inputVal;
  }
  int sumV = 0;
  double avgV = 0.0;
  for (auto val:v) {
	sumV += val;
  }
  avgV = sumV / v.size();
  std::cout << "Vector container Sum: "
			<< sumV
			<< " Average: " << avgV << std::endl;
  sumV = 0;
  avgV = 0.0;
  for (int i = 0; i < index; i++) {
	sumV += av[i];
  }
  avgV = sumV / index;
  std::cout << "Array container Sum: "
			<< sumV
			<< " Average: " << avgV << std::endl;
}
int main() {
//  exercise1_5_string();
//exercise1_5_C_style();
  ex1_6();
  return 0;
}

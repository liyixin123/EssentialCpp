#include <iostream>
#include <cstring>
#include <iomanip>
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
int main() {
  exercise1_5_string();
//exercise1_5_C_style();
  return 0;
}

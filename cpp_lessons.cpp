#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::string name;

  std::cout << "あなたの名前を入力してください:";
  std::cin >> name;
  std::cout << "Hello, " << name << "!\n";

  return 0;
}

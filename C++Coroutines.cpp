#include <iostream>
#include <string>

auto fibonnaci() -> Generator<int>{
  int first = 0, second = 1;
  while(true){
    co_yield a
    first = second;
    second = first + second;
  }
  
}

int main(int argc, char* argv[]){
  for(string a = 'n';a == "c" || a == "C";std::cin >> a){
    std::cout << fibonnaci() << '\n';
    std::cout << "Press C/c then enter to continue; anything else to quit." << std::endl;
  }
}
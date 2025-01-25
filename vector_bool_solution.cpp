#include <iostream>
#include <vector>

int main() {
  std::vector<bool> myVector(5);
  // Incorrect modification: Using [] doesn't guarantee a reference
  myVector[0] = true;
  //Correct modification 1: using at()
  myVector.at(1) = true; 
  // Correct modification 2: using iterators
  for (auto& b : myVector) {
    b = true;
  }
  for(auto b: myVector){
    std::cout << b << " ";
  }
  return 0;
}

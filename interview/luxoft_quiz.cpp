//What is the value of c++ at the end of the program?

/* static int c;

int main() {

	c = c+1 ^ 2;

	// return c++?

} */




/* #include <iostream>

int main() {
  std::cout << "Size of long: " << sizeof(long) << " bytes" << std::endl;
  std::cout << "Size of long: " << sizeof(int) << " bytes" << std::endl;
  return 0;
} */




// What will the following program return?
#include <iostream>

static const int i = 5;

int main() {

	// std::cout<< i * i ^ 0x7f + 2 ^ 4, 0 << std::endl;
    return i * i ^ 0x7f + 2 ^ 4, 0;
    // return ((i * i ^ 0x7f + 2 ^ 4) + 4);

}
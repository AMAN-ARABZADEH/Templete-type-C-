#include <iostream>

template<typename T>
void swap_value(T& a, T& b){
 T temp;
 temp = a;
 a = b;
 b = temp;
}

int main(){


 int a,b;
 std::cout << "Enter two integers to swap them: ";
 std::cin >> a >> b;
 swap_value(a , b);
 std::cout << "The swapped value are: " << a  << " " << b  << std::endl;


 char c,d;
  std::cout << "Enter two words to swap them: ";
  std::cin >> c >> d;
 swap_value(c , d);
 std::cout << "The swapped value are: " << c  << " " << d  << std::endl;

  std::string  e,f;
  std::cout << "Enter two chars to swap them: ";
  std::cin >> e >> f;
 swap_value(e,f);
 std::cout << "The swapped value are: " << e << " " << f << std::endl;




 return 0;
}
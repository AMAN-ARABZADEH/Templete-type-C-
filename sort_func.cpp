#include <iostream>

template<typename T>
void swap_value(T& a, T& b){
 T temp;
 temp = a;
 a = b;
 b = temp;
}


template <typename T>
int  index_of_smallest(const T a[], int started_index, int number_used){
 T min = a[started_index];
 int index_of_min = started_index;

 for(int index = started_index + 1; index < number_used; ++index){
    if(a[index] < min){
     min = a[index];
     index_of_min = index;
    }
 }
 return index_of_min;
}


template <typename T>
void sort(T a[], int number_used){
 int index_of_nex_smallest;
 for(int i = 0; i <number_used -1; ++i){
  index_of_nex_smallest = index_of_smallest(a, i, number_used);
   swap_value(a[i], a[index_of_nex_smallest]);

 }
 
}


int main(){


// Unsorted order
int a[10] = {9,8,5,4,6,7,2,1,3,0};
std::cout << "Unsorted integers in a array" << std::endl;
for(int i = 0; i < 10; ++i ){
 std::cout << a[i] << " ";
}
std::cout << std::endl;


// Sorted order
sort(a, 10);
std::cout << "In sorted order integers in a array" << std::endl;
for(int i = 0; i < 10; ++i ){
 std::cout << a[i] << " ";
}
std::cout << std::endl;

// Unsorted double
double b[5] = {2.5, 9.34, 82.5, 23.9, 30.2};
std::cout << "Sorted double in a array" << std::endl;
for(int i = 0; i < 5; ++i ){
 std::cout << b[i] << " ";
}
std::cout << std::endl;

// Sorted double in array
sort(b, 5);
std::cout << "Sorted double in a array" << std::endl;
for(int i = 0; i < 5; ++i ){
 std::cout << b[i] << " ";
}

// Unsorted chars in array

char c[7] = {'A', 'M', 'H', 'L', 'A', 'W', 'S'};
std::cout << "Unsorted chars in a array" << std::endl;
for(int i = 0; i < 7; ++i ){
 std::cout << c[i] << " ";
}


sort(c, 7);
std::cout << "Sorted chars in a array" << std::endl;
for(int i = 0; i < 7; ++i ){
 std::cout << c[i] << " ";
}


 return 0;
}
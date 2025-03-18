#include <iostream> 
using namespace std;

/* PART 2:
1. Can you explain how passing a pointer to a function can be used to modify the original variable value?
Answer: A pointer points to the address of a variable. When a function is called and operations are performed 
on the data, it can essentially be visualised as travelling to the location at which the variablre is stored, 
and changing the original date located there.

2. What would happen if we passed the double directly to the function rather than a pointer?
Answer: The changes made to the double would be saved into the stack, as all variables in the function are. 
However, once the function has terminated, the stack will release all the memory stored from the function and 
return to the main function. This means the value double would not have changed outside of the called function.
*/
void changeValue(double* val) {
  *val = 42.0;
  cout << *val << endl;
}

/* PART 3:
1. How do you pass an array to a function in C++ and why is it done this way?
Answer: Arrays can be passed to a function by using a pointer to point to the first element of the array. 
Interestingly, the variable name used when declaring the array is actually already a pointer to the 
first element of the array. 
So, when we make an array such as: int a[3] = {...}; when we call a by itself, say, 
cout << a << endl; // this will actually print the address of a[0]
cout << *a << endl; // and this will print the value of a[0]
cout << *(a+1) << endl; // will print the address of a[1] and so on

2. What does the size argument represent and why is it necessary?
Answer: The size argument represents the number of elements within the array. This is necessary so that 
when accessing the elements inside the array using, for example, a for-loop, we do not access memory 
outside of waht has been allocated to the array. This could cause garbagr data and unexpected program 
behaviours that the compiler will not warn us about.
*/
void printArray(double* a, int n) {
  for (int i = 0; i < n; i++) {
    cout << *(a + i) << " " << endl;
  }
}

/* PART 4:
Why does the function need to return a double, and not a pointer?
Answer: 
*/
double arrayMax(double* a, int n) {
  double max = *a;
  for (int i = 0; i < n; i++) {
    if (*(a+i) > max) {
      max = *(a+i);
    }
  }
  return max;
}

/* PART 7:
1. Can you explain what happens when you initialize the array elements with the value M in the dynamicArray function?
Answer: 

2. What might be a practical application of initializing an array with a specific value?
Answer: 
*/
double* dynamicArray(int N, double M) {
  double* array = new double[N];
  for (int i = 0; i < N; i++) {
    array[i] = M;
  }
  return array;
}
#include <iostream>
using namespace std;

int *readNumbers(int length) {
  int* numbers = new int[length];
  cout << "Enter " << length << " numbers: ";
  for (int i = 0; i < length; i++) {
    cin >> numbers[i];
  }
  return numbers;
}

int secondSmallestSum(int *numbers, int length) {
  if (length <= 1) {
    return -1;
  }

  // Find number of sub-array
  int num_subarray = 0;
  for (int i = 0; i < length; i++) {
    num_subarray = num_subarray + (length - i);
  }
  
  // find sum of each sub-array
  int* sum_subarray = new int[num_subarray];
  int index = 0;
  int sum = 0;
  for (int i = 0; i < length; i++) {
    for (int j = i; j < length; j++) {
      sum = sum + numbers[j];
      sum_subarray[index] = sum;
      index++;
    }
    int remain_sum = sum;
    for (int k = length - 1; k >= i; k--) {
      remain_sum = sum - numbers[k];
      sum_subarray[index] = remain_sum;
      index++;
    }
  }

  // find the smallest sum of sub-array
  int smallest = sum_subarray[0];
  for (int i = 0; i < num_subarray; i++) {
    if (sum_subarray[i] < smallest) {
      smallest = sum_subarray[i];
    }
  }

  int biggest = sum_subarray[0];
  for (int i = 0; i < num_subarray; i++) {
    if (sum_subarray[i] > biggest) {
      biggest = sum_subarray[i];
    }
  }

  // find the second smallest sum of sub-array
  int secondSmallest = biggest;
  for (int i = 0; i < num_subarray; i++) {
    if (sum_subarray[i] != smallest && sum_subarray[i] < secondSmallest && sum_subarray[i] > smallest) {
      secondSmallest = sum_subarray[i];
    }
  }
  delete[] sum_subarray;
  return secondSmallest;
}
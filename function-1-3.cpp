#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
  int num_0s, num_1s, num_2s, num_3s, num_4s, num_5s, num_6s, num_7s, num_8s, num_9s;
  num_0s = num_1s = num_2s = num_3s = num_4s = num_5s = num_6s = num_7s = num_8s = num_9s = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      switch (array[i][j]) {
        case 0:
          num_0s++;
          break;
        case 1:
          num_1s++;
          break;
        case 2:
          num_2s++;
          break;
        case 3:
          num_3s++;
          break;
        case 4:
          num_4s++;
          break;
        case 5:
          num_5s++;
          break;
        case 6:
          num_6s++;
          break;
        case 7:
          num_7s++;
          break;
        case 8:
          num_8s++;
          break;
        case 9:
          num_9s++;
          break;
        default:
          break;
      }
    }
  }
  cout << "0:" << num_0s << ";1:" << num_1s;
  cout << ";2:" << num_2s << ";3:" << num_3s;
  cout << ";4:" << num_4s << ";5:" << num_5s;
  cout << ";6:" << num_6s << ";7:" << num_7s;
  cout << ";8:" << num_8s << ";9:" << num_9s;
  cout << ";" << endl;
}
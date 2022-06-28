// Hoppock, Zachary
// testScoreAverage.cpp
// 10/13/2020
// Using a do while loop, compute the average of 3 test scores
// Version # 1
#include <iostream>
using namespace std;

int main()
{
  int score1, score2, score3;
  int count = 3;
  double average = 0;
  string option;
  string condition = "N";
  do
  {
    cout << "Enter 3 test scores and I will average them:  ";
    cin >> score1 >> score2 >> score3;
    int sum = score1 + score2 + score3;
    average = sum / count;
    cout << "The average is " << average << "." << endl;
    cout << "Do you want to average another set? (Y/N)  ";
    cin >> option;
  }
  while (option != condition);
  return 0;
}
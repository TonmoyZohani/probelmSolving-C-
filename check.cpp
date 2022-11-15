#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int num = 153, digitSum, temp, remainderNum, digitNum ;
   temp = num;
   digitNum = 0;
   while (temp != 0) {
      digitNum++;
      temp = temp/10;
   }
   temp = num;
   digitSum = 0;
   while (temp != 0) {
      remainderNum = temp%10;
      digitSum = digitSum + pow(remainderNum, digitNum);
      temp = temp/10;
   }
   if (num == digitSum)
      cout<<num<<" is an Armstrong number";
   else
      cout<<num<<" is not an Armstrong number";
   return 0;
}

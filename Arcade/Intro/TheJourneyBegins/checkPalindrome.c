#include<string.h>
bool checkPalindrome(char * inputString) {
  int i, length;
  bool flag;
  
  length = strlen(inputString);
  
  for(i = 0 ; i < length ; i++)
  {
      if(inputString[i] != inputString[length-i-1])
      {
        flag = false;
        return flag;
      }
  }
}
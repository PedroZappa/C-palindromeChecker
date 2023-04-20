#include <stdio.h>
#include <string.h>

int main() {
  char string1[20];
  int i, length, flag = 0;

  // String Input
  printf("Enter a string to Palindrome Check: ");
  scanf("%s", string1);

  length = strlen(string1);

  // Palindrome Checking
  for (i = 0; i < length; i++) {
    // Condition for non-palindrome
    if (string1[i] != string1[length - i - 1]) {
      flag = 1;
      break;
    }
  }

  // Check Flag & Print Check Result
  if (flag == 1) {
    printf("%s is not a palindrome.", string1);
  } else {
    printf("%s is a palindrome.", string1);
  }

  return 0;
} 

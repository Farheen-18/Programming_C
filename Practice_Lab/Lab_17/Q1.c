PracticeLab7_Question1

Consider an array of words (arranged in dictionary alphabetical order) and a keyword. 
You need to use the strcmp library function to determine where in the array the input key should be placed to maintain the dictionary order of the words.

We have already provided the code for you that contains the sample array of strings and takes the keyword input from the user.

#include <stdio.h>
#include <string.h>

int main()
{
  char words[10][20] = {"apple", "banana", "cherry", "grape", "kiwi", "lemon", "orange", "pear", "pineapple", "watermelon"};
  //assuming the given words are already arranged
  char key[20];
  char new_dic[11][20];

  scanf("%s", &key);
  int pos;
  for (int i=0; i<11; i++)
    {
      if ((strcmp(words[i], key)) <0 && (strcmp(words[i+1],key)>0))
      {
          pos=i+1;
      }
    }
printf("%d", pos);
return 0;
}

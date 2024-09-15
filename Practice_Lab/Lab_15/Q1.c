/*
PracticeLab1_Question1

Consider that a numeric string, such as “2022,” is stored in an input variable. 
You need to convert this numeric string into an actual number and store the result in any integer variable. 
*/

int main()
{
  int len;
  scanf("%d", &len); //length of string

  char strnum[len];
  scanf("%s", strnum);

  int num = 0;
    int i=0;
  while (strnum[i]!='\0')
    {
      num = num*10 + (strnum[i] - '0');
      printf("%d\n", num);
      i++;
    }
  printf("%d", num);
  return 0;
}

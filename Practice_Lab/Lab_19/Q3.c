PracticeLab2_Question3

Write a function that takes two dates as parameters, compares them, and returns which date is older.

You should make a structure called Date, and store both the dates in the structure.

You should make a function that takes two Dates as input and returns the larger Date.

Now, write a program so that it takes N = 10 dates as input, compares all of them, and prints the oldest date.

Input will be given in the following format - each line will contain a new date in the form “D M Y”.

Testcase1

    Input:
          12 9 2002
          27 1 2003

    Output: 
           The oldest date is 12-9-2002

Explanation: The dates correspond to 12th September, 2002 and 27th January, 2003. The older date is printed.
/*
#include <stdio.h>
struct date
{
  int date;
  int month;
  int year;
};

int main()
{
  int N;
  scanf("%d", &N);

  struct date array[N];

  for (int i=0; i<N; i++)
  {
    scanf("%d %d %d", &array[i].date, &array[i].month, &array[i].year);    
  }
  
  int old_year = 9999;
  int old_month = 12;
  int old_date = 31;
  int year_same_count=0;
  int month_same_count=0;
  int day_same_count=0;
  
  for (int i=0; i<N; i++) //to find the oldest year
{
  if (array[i].year < old_year)
  {
    
  }
}
    
    
  return 0;
}
*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Date olderDate(struct Date date1, struct Date date2) {
    if (date1.year < date2.year) {
        return date1;
    } else if (date1.year > date2.year) {
        return date2;
    } else if (date1.month < date2.month) {
        return date1;
    } else if (date1.month > date2.month) {
        return date2;
    } else if (date1.day < date2.day) {
        return date1;
    } else {
        return date2;
    }
}

int main() {
    int N = 10;
    struct Date dates[N];
    struct Date oldestDate;

    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &dates[i].day, &dates[i].month, &dates[i].year);
    }

    oldestDate = dates[0];
    for (int i = 1; i < N; i++) {
        oldestDate = olderDate(oldestDate, dates[i]);
    }

    printf("The oldest date is %d-%d-%d\n", oldestDate.day, oldestDate.month, oldestDate.year);

    return 0;
}

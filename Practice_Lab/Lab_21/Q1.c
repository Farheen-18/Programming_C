/*
PracticeLab2_Question1

Consider two arrays, one containing the names of the students in a class, and another containing their marks in an
evaluative component.
  
The name of the students is stored as an array of char * and their marks as an array of integers. 
  
You can assume that all names are unique in the class.

The same index in both arrays represents a student-marks pair.

This data is initialized in main(). 

Don’t modify the main() function. 

You have to complete the code for a few functions which perform some operations on this data. These functions have been
declared, but their definitions have been left empty. 

    1.Complete the function num_pass() that calculates the number of students who passed the component by scoring more than 35
       marks. 

    2. Complete the function rank() that calculates the rank of a student in the exam. 

    3. For one of the questions, an alternate solution was correct. You have the list of names of students who used the
       alternate solution, and you need to increment their marks by 5. Complete the function update_marks() as specified in the
       code file. 
*/

#include <stdio.h>
#include <string.h>
int num_pass(char **students, int *marks, int n)
{
    /*
        Parameters:
        char **students: the pointer to the first element of the students array.

        int *marks: the pointer to the first element of the marks array.

        int n: the number of elements in the students array = the number of elements
         in the marks array.

        Functionality:
        num_pass() takes in the marks array and returns the number of students who passed 
        the exam (marks >= 35).

        Note that here the pointer to the first element of the array and number
        of elements in the array are passed as arguments. Using these, you can
        access all the elements of the array.

        The int num_passed has been declared and initialized to -1.
        You need to update this variable with the correct value and return it.
    */
    int num_passed = -1;
    // Write your code here
    return num_passed;
}

//----------------------------------------------------------------------
//----------------------------------------------------------------------

int rank(char **students, int *marks, int n, char *student)
{
    /*
        Parameters:
        char **students: the pointer to the first element of the students array.

        int *marks: the pointer to the first element of the marks array.

        int n: the number of elements in the students array = the number of elements 
        in the marks array.

        char *student: the name of the student whose rank is to be found.

        Functionality:
        rank() takes in the name of a student and returns his/her rank in the class.
        For example, if the student is the top scorer, the rank is 1. If the student
        is the second top scorer, the rank is 2, and so on. If two or more students
        have the same marks, they are given the same rank. For example, if there are
        3 students with the same marks which is the highest in the class, they are
        all given the rank 1. The next student is given the rank 4.
        Thus, the rank of a student is the number of students who scored more marks.

        Hint: You can use strcmp() to compare two strings.

        Note that here the pointer to the first element of the array and number
        of elements in the array are passed as arguments. Using these, you can
        access all the elements of the array.

        The integer rank has been declared and initialized to -1 for your convenience.
        You need to update this variable with the correct value and return it.
    */
    int rank = -1;
    // Write your code here
    return rank;
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

int rank(char **students, int *marks, int n, char *student)
{
    /*
        Parameters:
        char **students: the pointer to the first element of the students array.

        int *marks: the pointer to the first element of the marks array.

        int n: the number of elements in the students array = the number of elements 
        in the marks array.

        char *student: the name of the student whose rank is to be found.

        Functionality:
        rank() takes in the name of a student and returns his/her rank in the class.
        For example, if the student is the top scorer, the rank is 1. If the student
        is the second top scorer, the rank is 2, and so on. If two or more students
        have the same marks, they are given the same rank. For example, if there are
        3 students with the same marks which is the highest in the class, they are
        all given the rank 1. The next student is given the rank 4.
        Thus, the rank of a student is the number of students who scored more marks.

        Hint: You can use strcmp() to compare two strings.

        Note that here the pointer to the first element of the array and number
        of elements in the array are passed as arguments. Using these, you can
        access all the elements of the array.

        The integer rank has been declared and initialized to -1 for your convenience.
        You need to update this variable with the correct value and return it.
    */
    int rank = -1;
    // Write your code here
    return rank;
}

//---------------------------------------------------------
//----------------------------------------------------------

int main()
{
    /*
        The main() function has been provided to you. You do not need to modify it.
    */
    char *students[] = {"Harry", "Ron", "Hermione", "Neville",
                        "Seamus", "Dean", "Fred", "George"};
    int marks[] = {56, 32, 84, 52, 25, 31, 40, 31};
    char *alt_students[] = {"Harry", "Neville", "Fred", "George"};
    int num_students = sizeof(students) / sizeof(students[0]);
    int num_alt_students = sizeof(alt_students) / sizeof(alt_students[0]);

    // Print the marks, number of students who passed and rank of all students
    // before updating marks
    printf("Before update:\n");
    print_marks(students, marks, num_students);
    printf("\nNumber of students who passed: %d\n", num_pass(students, marks, num_students));
    printf("\nRanks of students:\n");
    for (int i = 0; i < num_students; i++)
    {
        printf("%s: %d\n", students[i], rank(students, marks, num_students, students[i]));
    }

    // Update marks
    update_marks(students, marks, num_students, alt_students, num_alt_students);
    // print horizontal line
    printf("--------------------------------------------\n");
    // Print the marks, number of students who passed and rank of all students
    // after updating marks
    printf("After update:\n");
    print_marks(students, marks, num_students);
    printf("\nNumber of students who passed: %d\n", num_pass(students, marks, num_students));
    printf("\nRanks of students:\n");
    for (int i = 0; i < num_students; i++)
    {
        printf("%s: %d\n", students[i], rank(students, marks, num_students, students[i]));
    }
    return 0;
}

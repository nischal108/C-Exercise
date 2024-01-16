

/* OUTPUT :

                                                         Enter the roll (1): 1
                                                         Enter the name (1): nischal
                                                         Enter the address of the student 1:
                                                         Enter the district (1): sunsari
                                                         Enter the municipality (1): ramdhuni
                                                         Enter the ward (1): 5
                                                         Enter the marks obtained by student 1:
                                                         Subject 1: 99
                                                         Subject 2: 98
                                                         Subject 3: 87
                                                         Enter the roll (2): 2
                                                         Enter the name (2): manish
                                                         Enter the address of the student 2:
                                                         Enter the district (2): jhapa
                                                         Enter the municipality (2): haraincha
                                                         Enter the ward (2): 2
                                                         Enter the marks obtained by student 2:
                                                         Subject 1: 67
                                                         Subject 2: 76
                                                         Subject 3: 82
                                                          the average marks of all the students is  : 255.500000
*/

#include <stdio.h>

typedef struct
{
    char district[100];
    char municipality[100];
    int ward;
} address;

typedef struct
{
    int roll;
    char name[100];
    address add;
    int marks[3];
} students;

void inputStudents(students std[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Enter the roll (%d): ", i + 1);
        scanf("%d", &std[i].roll);
        printf("Enter the name (%d): ", i + 1);
        scanf("%s", std[i].name);
        printf("Enter the address of the student %d:\n", i + 1);
        printf("Enter the district (%d): ", i + 1);
        scanf("%s", std[i].add.district);
        printf("Enter the municipality (%d): ", i + 1);
        scanf("%s", std[i].add.municipality);
        printf("Enter the ward (%d): ", i + 1);
        scanf("%d", &std[i].add.ward);
        printf("Enter the marks obtained by student %d:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &std[i].marks[j]);
        }
    }
}

float averageMark(students std[], int numb)
{
    int i, j, sum;
    float avg;
    for (i = 0; i < numb; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += std[i].marks[j];
        }
    }
    avg = (float)sum / numb;
    return avg;
}

int main()
{
    students std[2];
    int numb;
    float avg;
    numb = (int)(sizeof(std) / sizeof std[0]);
    inputStudents(std, numb);
    avg = averageMark(std, numb);
    printf(" the average marks of all the students is  : %f  ", avg);

    return 0;
}
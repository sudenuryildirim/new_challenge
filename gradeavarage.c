#include <stdio.h>

int main(){
int student, i, grade1,grade2,grade3;
double avg,average[100];

printf("How many student information will be entered:");
scanf("%d",&student);

for(i = 0; i < student; i++){
	printf("Enter the grades of the %d. student:", i+1);
	scanf("%d%d%d",&grade1,&grade2,&grade3);

	avg = (grade1 + grade2 + grade3) / 3.0;
	average[i] = avg;
}

for(i = 0; i < student; i++){
	printf("Average of %d.  student: %lf\n",i+1, average[i]);
}

 return 0;
}

/*output:
How many student information will be entered:3
Enter the grades of the 1. student:45
67
98
Enter the grades of the 2. student:99
34
59
Enter the grades of the 3. student:19
90
28
Average of 1.  student: 70.000000
Average of 2.  student: 64.000000
Average of 3.  student: 45.666667 */

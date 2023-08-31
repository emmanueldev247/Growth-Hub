#include <stdio.h>

int main(void)
{
	int test, exam, total;
	char c;
	
	c = 'y';
	while (c == 'y' || c == 'Y')
	{
		printf("Enter your test score: ");
		fflush(stdout);
		scanf("%d", &test);
		printf("Enter your exam score: ");
		fflush(stdout);
		scanf("%d", &exam);

		total = test + exam;

		printf("\n");
		if  (total >= 70 && total <= 100)
			printf("You scored %d, that's an A\n", total);
		else if  (total >= 60 && total < 70)
			printf("You scored %d, that's an B\n", total);
		else if  (total >= 50 && total < 60)
			printf("You scored %d, that's an C\n", total	);
		else if  (total >= 40 && total < 50)
			printf("You scored %d, that's an D\n", total);
		else if  (total >= 0 && total < 40)
			printf("You scored %d, that's an F\n", total);
		else
			printf("%d is an invalid score\n", total);

		printf("\nDo you want to enter another score?\n(y - Yes | n - No) -> ");
		fflush(stdout);
		scanf(" %c", &c);
		getchar();

		while (c != 'y' && c!= 'Y' && c != 'n' && c != 'N')
		{
			printf("\n Wrong choice - %c", c);
			printf("\nDo you want to enter another score?\n(y - Yes | n - No) -> ");
			fflush(stdout);
			scanf(" %c", &c);
			getchar();
		}


		printf("\n");
	}
	printf("BYE!!!...\n");
}

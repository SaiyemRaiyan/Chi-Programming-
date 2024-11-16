#include <stdio.h>
int main()
{
	int pulse; /* resting pulse rate for 10 secs */
	int rest_heart_rate; /* resting heart rate for 1 minute */

	printf("<<<<<<<<<<<<  Take resting pulse for 10 seconds  >>>>>>>>>>>> \n\n");
	printf("Enter pulse rate and press return: ");
	scanf("%d", &pulse);

	/* Calculate resting heart rate for minute */
	rest_heart_rate = pulse * 6;
	printf("\nYour resting heart rate is %d \n", rest_heart_rate);

	if(rest_heart_rate > 56)
		printf("Keep up your exercise program!\n");
	else
		printf("Your heart is in excellent health!\n");

	return 0;
}

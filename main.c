#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


float converter(float temperature)
{
	float kelvin = 273.15;
	float converted;
	converted = temperature + kelvin;
	return converted;
}

int main()
{
	char user_input[20];
	char name[] = "Bob";
	char status[] = "Exploring";
	unsigned int battery = 78;
	float temperature = -13.34;
	long int velocity = 12;
	double abs_temp;
	float kelvins;



	char _name[] = "name";
	char _battery[] = "battery";
	char _temperature[] = "temperature";
	char _velocity[] = "velocity";
	char _bytes[] = "bytes";
	char _extreme[] = "extreme";
	char _absolute[] = "absolute";
	char _status[] = "status";
	char _convert[] = "convert";

	float max_temp = 19.5;
	float min_temp = -6.1;

	int max_batt = 100;
	int min_batt = 0;

	int max_vel = 26;
	int min_vel = 0;

	printf("Hi, I'm Mars rover!\n");

	while (1)
	{
		printf("Input a variable name to check it\n");
		printf("Input 'bytes' to see number of bytes reserved for each variable type\n");
		printf("Input 'absolute' to see the absolute value of the temperature\n");
		printf("Input 'extreme' to see the maximum and minimum values of battery, temperature and velocity\n");
		printf("Input 'convert' to see current temperature in Kelvins");
		printf("\n");

		scanf_s("%s", &user_input, 20);

		if (strcmp(user_input, _name) == 0)
		{
			printf("My name is %s\n", name);

		}

		else if (strcmp(user_input, _battery) == 0)
		{
			printf("The battery level is %d %%\n", battery);
			battery -= 2;
		}

		else if (strcmp(user_input, _temperature) == 0)
		{
			printf("The temperature is %.2f C\n", temperature);
			temperature -= 1;
		}
		else if (strcmp(user_input, _velocity) == 0)
		{
			printf("The velocity is %d km/h\n", velocity);
			velocity += 1;
		}
		else if (strcmp(user_input, _bytes) == 0)
		{
			printf("The 'name' variable has %zu bytes\n", sizeof(name));
			printf("The 'temperature' variable has %zu bytes\n", sizeof(temperature));
			printf("The 'velocity' variable has %zu bytes\n", sizeof(velocity));
			printf("The 'battery' variable has %zu bytes\n", sizeof(battery));
			printf("\n");
		}
		else if (strcmp(user_input, _extreme) == 0)
		{
			printf("The maximum velocity is %d\n", max_vel);
			printf("The minimum velocity is %d\n", min_vel);
			printf("\n");
			printf("The maximum battery status is %d\n", max_batt);
			printf("The minimum battery status is %d\n", min_batt);
			printf("\n");
			printf("The maximum temperature is %.2f\n", max_temp);
			printf("The minimum temperature is %.2f\n", min_temp);
			printf("\n");
		}
		else if (strcmp(user_input, _absolute) == 0)
		{

			abs_temp = fabs(temperature);
			printf("The absolute temperature value is %.2lf\n", abs_temp);

		}
		else if (strcmp(user_input, _status) == 0)
		{
			printf("My current status is %s\n", status);
		}
		else if (strcmp(user_input, _convert) == 0)
		{
			kelvins = converter(temperature);
			printf("Current temperature is %.2f\n", kelvins);
		}
		else
		{
			printf("This variable does not exist\n");
		}
	}

	return 0;
}
// PROJECT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning (disable:4996)

char message;
int num;
char sum2[100];
char events[100];

void log(char message[1000])
{
	FILE* f = fopen("secondfile.log", "a");
	if (!f)
	{
		LogError("file not open");

	}
	fputs(message, f);
	fputs("\n", f);
	fclose(f);




}

LogError(char message[100])
{

	char newmessage[100];
	sprintf(newmessage, "error - %s", message);
	log(newmessage);


}
void LogEvent(char message[100])
{
	char events[100];
	sprintf(events, "event %s", message);
	log(events);



}


int main()
{
	log("start of log");
	LogEvent("system is starting");
	sprintf(events, "system is starting %s", message);

	time_t t;
	time(&t);

	struct tm* timeinfo;
	timeinfo = localtime(&t);
	char str[100];

	sprintf(str, "%d%d%d", timeinfo->tm_year, timeinfo->tm_mon, timeinfo->tm_yday);
	log(str);

	printf("please enter a number");
	scanf("%d", &num);
	sprintf(sum2, "%d\n", num);
	LogEvent("the system get value from the user");
	sprintf(events, "the system get value from the user %s", message);
	log(sum2);

	FILE* f1 = fopen("numbers.txt", "w");

	if (!f1)
	{
		log("error f1 didnt open");
	}
	else
	{
		log("the file open");
		char arr[100];
		for (int i = 1; i < num; i++)
		{
			sprintf(arr, "%d\n", i);
			fputs(arr, f1);
		}
	}
	fclose(f1);

	log("end of log");
	LogEvent("system is finish");
	printf(events, "system is finish %s", message);
}

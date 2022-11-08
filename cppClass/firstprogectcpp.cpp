#include <iostream>
#include <string.h>
#include "blog.h"
#pragma warning (disable:4996)


int countKM = 0;
int main()
{


	char s1[] = "newBlog";
	char s2[] = "";
	Blog myBlog(s1, s2, 0);


	int userResponse = 0;;

	while (userResponse != 5)
	{
		printf("please press 1 for add line, 2 for print, 3 for save in file, 4 for load from file, 5 for exit");
		scanf("%d", &userResponse);
		printf("\n\n");
		switch (userResponse) {
		case 1:
			myBlog.addLine(s1);
			break;

		case 2:

			myBlog.print();
			break;

		case 3:

			myBlog.saveinFile();
			break;


		case 4:

			myBlog.loadFromFile();
			break;
		}


	}


}

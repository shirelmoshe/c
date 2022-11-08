#include "blog.h"
#include <stdio.h>
#include <string.h>
#include <iostream>

#pragma warning(disable : 4996)

Blog::Blog(char* aname, char* atext, int alinecount) {


	strcpy_s(name, aname);
	strcpy_s(text, atext);
	linecount = alinecount;


}

int countLine = 0;

void Blog::addLine(char* txt)
{
	strcat_s(this->text, txt);
	strcat_s(this->text, "\n");

	countLine++;
	this->linecount = countLine;
}

void Blog::print()
{
	printf_s("%s\n", this->text);

}



void  Blog::saveinFile()
{
	FILE* f = fopen("blog.txt", "w");
	if (!f)return;
	fputs(this->text, f);
	fclose(f);
}


void Blog::loadFromFile() {
	FILE* f = fopen("blog.txt", "r");
	if (!f)return;
	char ch;
	int count = 0;


	while (fread(&ch, sizeof(char), 1, f))
	{
		count++;
	}
	fclose(f);
	f = fopen("blog.txt", "r");
	if (!f)return;
	int read = fread(this->text, sizeof(char) * (count), 1, f);

	fclose(f);


}










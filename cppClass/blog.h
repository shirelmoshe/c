#pragma once

class  Blog
{
public:
	char name[20];
	char text[100];
	int linecount;

	Blog(char* aname, char* atext, int alinecount);


	void saveinFile();
	void loadFromFile();
	void addLine(char* txt);
	void print();
};







#pragma once
#include "Kniga.h"

class Kont
{
	struct item {
		Kniga book;
		struct item *next;
	};

	struct item *list = NULL;
public:
	void addbook(Kniga k);
	void delbook(string str);
	void delbook(int n);
	void searchbook(string str);
	void print();
	void copy(Kont *k);
	Kont();
	~Kont();
};


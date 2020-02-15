#include "stdafx.h"
#include "Kont.h"


void Kont::addbook(Kniga k)
{
	struct item *cur = list;
	struct item *p = new item;
	p->book = k;
	p->next = NULL;
	string b1, b2;

	if (list == NULL)
	{
		list = p;
	}

	else
	{
		b1 = k.getBname();
		b2 = list->book.getBname();
		if (b1[0] <= b2[0])
		{
			p->next = list;
			list = p;
		}
		else
		{
			p = list;
			b2 = p->book.getBname();
			while (p != NULL && b1[0] > b2[0])
			{
				cur = p;
				p = p->next;
			}
			struct item *temp = new item;
			temp->book = k;
			temp->next = p;
			cur->next = temp;
		}
	}
}

void Kont::delbook(string  str)
{
	struct item *p = list;
	struct item *cur=p;
	int b=-1;
	string s;
	if (p == NULL) { 
		cout << "Значение не найдено" << endl; 
	}
	else {
		s = p->book.getBname();
		b = s.find(str);
		while (p != NULL && b==-1)
		{
			cur = p;
			p = p->next;
			s = p->book.getBname();
			b = s.find(str);
		}
		if (p == NULL) {
			cout << "Значение не найдено" << endl;
		}
		else {
			cur->next = p->next;
			free(p);
			cout << "Значение удалено" << endl;
		}


	}
}

void Kont::delbook(int n)
{
	struct item *p = list;
	struct item *cur=p;
	for (int i = 0; i < n-1; i++) 
	{
		if (p == NULL) { break; }
		else {
			cur = p;
			p = p->next;
		}
	}
	if (p == NULL) { cout << "Неверное значение" << endl; }
	else {
		cur->next = p->next;
		free(p);
		cout << "Значение удалено" << endl;
	}

}

void Kont::searchbook(string  str)
{
	struct item *p = list;
	struct item *cur;
	bool b;
	string s;
	if (p == NULL) {
		cout << "Значение не найдено" << endl;
	}
	else {
		s = p->book.getBname();
		b = s.find(str);
		while (p != NULL && !b)
		{
			cur = p;
			p = p->next;
			s = p->book.getBname();
			b = s.find(str);
		}
		if (p == NULL) {
			cout << "Значение не найдено" << endl;
		}
		else {
			cout << "Значение найдено" << endl;
		}


	}
}

void Kont::print()
{
	struct item *p = list;
	for  (int i =0;;i++)
	{
		if (p == nullptr) { break; }
		else
		{
			cout << i + 1 << ")Книга: " << p->book.getBname() << " Автор: " << p->book.getAname() << " " << p->book.getAlname() << endl;
			p = p->next;
		}

	}
	free(p);
}

void Kont::copy(Kont *k)
{
	struct item *p = list;
	while (p != nullptr) {
		Kniga q(p->book.getAname(), p->book.getAlname(), p->book.getBname());
		k->addbook(q);
		p = p->next;
	}
}

Kont::Kont()
{
}


Kont::~Kont()
{
	free(list->next);
	free(list);
	cout << "Контейнер удален" << endl;
}

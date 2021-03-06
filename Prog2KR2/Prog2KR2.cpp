// Prog2KR2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Kniga.h"
#include "Kont.h"


int main()
{
	setlocale(LC_ALL, "RUS");
	Kont k;
	Kniga b1("Рэй", "Бредбери", "451 по Фаренгейту");
	Kniga b2("Грегори", "Робертс", "Шантарам");
	Kniga b3("Джордж", "Оруэлл", "1984");
	Kniga b4("Михаил", "Булгаков", "Мастер и Маргарита");
	Kniga b5("Эрих Мария", "Ремарк", "Три товарища");
	k.addbook(b1);
	k.addbook(b2);
	k.addbook(b3);
	k.addbook(b4);
	k.addbook(b5);
	cout << "Добавленые книги: " << endl;
	k.print();
	cout << "Удалим книгу под 3 номером " << endl;
	k.delbook(3);
	cout << "Добавленые книги: " << endl;
	k.print();
	cout << "Удалим книгу содержащую слово 1984 " << endl;
	k.delbook("1984");
	cout << "Добавленые книги: " << endl;
	k.print();
	cout << "Проверим есть ли книга содержащая слово ""Три"" " << endl;
	k.searchbook("Три");
	cout << "Добавленые книги: " << endl;
	k.print();
	cout << "Создадим 2 контейнер и скопируем в него все данные из первого контейнера " << endl;
	Kont k2;
	Kont *temp = &k2;
	k.copy(temp);
	cout << "Добавленые книги в 1 контейнере: " << endl;
	k.print();
	cout << "Добавленые книги во 2 контейнере: " << endl;
	k2.print();

	cout << "Удалим книгу под 2 номером из первого контейнера " << endl;
	k.delbook(2);

	cout << "Добавленые книги в 1 контейнере: " << endl;
	k.print();
	cout << "Добавленые книги во 2 контейнере: " << endl;
	k2.print();
	k.~Kont();
	k2.~Kont();
	_getch();
    return 0;
}


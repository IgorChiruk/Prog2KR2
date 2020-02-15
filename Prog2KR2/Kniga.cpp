#include "stdafx.h"
#include "Kniga.h"


void Kniga::setAname(char * string)
{
	Aname=string;
}

void Kniga::setAlname(char * string)
{
	Alname= string;
}

void Kniga::setBname(char * string)
{
	Bname= string;
}

string Kniga::getAname()
{
	return Aname;
}

string Kniga::getAlname()
{
	return Alname;
}

string Kniga::getBname()
{
	return Bname;
}

Kniga::Kniga()
{
}

Kniga::Kniga(string aname, string alname, string bname)
{
	Aname= aname;
	Alname= alname;
	Bname= bname;
}


Kniga::~Kniga()
{
}

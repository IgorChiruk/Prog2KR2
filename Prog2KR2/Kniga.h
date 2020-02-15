#pragma once
class Kniga
{
	string Aname;
	string Alname;
	string Bname;
public:
	void setAname(char *string);
	void setAlname(char *string);
	void setBname(char *string);

	string getAname();
	string getAlname();
	string getBname();

	Kniga();
	Kniga(string aname, string alname, string bname);
	~Kniga();
};


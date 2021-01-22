#pragma once
#ifndef TEXTBOOK
#define TEXTBOOK
#include <string> 
using namespace std;
class Textbook { 
private: 
	string title; // book title 
	string author; // author name 
	string publisher; // publisher name 
public: 
	Textbook() // default constructor 
	{
		title = " ";
		author = " ";
		publisher = " ";
	}
	Textbook(string textTitle, string auth, string pub) // parametrized constructor 
	{
		set(textTitle, auth, pub);
	}
	Textbook(const Textbook& aTextbook) // copy constructor
	{
		setTitle(aTextbook.getTitle());
		setAuthor(aTextbook.getAuthor());
		setPublisher(aTextbook.getPublisher());
	}
	~Textbook() // destructor
	{
		cout << "Destroying!" << endl;
	}
	void set(string textTitle, string auth, string pub)
	{
		title = textTitle;
		author = auth;
		publisher = pub;
	}
	void setTitle(string textTitle)
	{
		title = textTitle;
	}
	void setAuthor(string auth)
	{
		author = auth;
	}
	void setPublisher(string pub)
	{
		publisher = pub;
	}
	string getTitle() const
	{
		return title;
	}
	string getAuthor() const
	{
		return author;
	}
	string getPublisher() const
	{
		return publisher;
	}
	void print() const // print function
	{
		cout << "Textbook title: " << getTitle() << endl;
		cout << "Textbook author: " << getAuthor() << endl;
		cout << "Publisher: " << getPublisher() << endl;
	}
	friend ostream& operator << (ostream& strm, const Textbook& obj) // << operator
	{
		strm << "Title: " << obj.getTitle() << endl;
		strm << "Author: " << obj.getAuthor() << endl;
		strm << "Publisher: " << obj.getPublisher() << endl;
		return strm;
	}
	friend istream& operator >> (istream& strm, Textbook& obj) // >> operator
	{
		cout << "Enter the textbook title: " << endl;
		strm >> obj.title;
		cout << "Enter the textbook author: " << endl;
		strm >> obj.author;
		cout << "Enter the textbook publisher: " << endl;
		strm >> obj.publisher;
		return strm;
	}
};
#endif
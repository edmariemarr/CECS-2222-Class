#include "Textbook.h"

Textbook::Textbook() {

}
 
Textbook::Textbook(string textTitle, string auth, string pub) {

}

Textbook::Textbook(const Textbook& aTextbook) {
	setTitle(aTextbook.getTitle());
	setAuthor(aTextbook.getAuthor());
	setPublisher(aTextbook.getPublisher());
}

Textbook::~Textbook() {

}

void Textbook::set(string textTitle, string auth, string pub) {

}

void Textbook::set(Textbook aTextbook) {

}

void Textbook::setTitle(string textTitle) {

}

void Textbook::setAuthor(string auth) {

}

void Textbook::setPublisher(string pub) {

}

string Textbook::getTitle() const {

}

string Textbook::getAuthor() const {

}

string Textbook::getPublisher() const {

}

Textbook Textbook::getTextbook() const {

}

void Textbook::print() const {

}

ostream& operator << (ostream& strm, const Textbook& obj) {
	strm << "Title: " << obj.getTitle() << endl;
	strm << "Author: " << obj.getAuthor() << endl;
	strm << "Publisher: " << obj.getPublisher() << endl;
	return strm;
}

istream& operator >> (istream& strm, Textbook& obj) {
	cout << "Enter the textbook title: " << endl;
	strm >> obj.title;
	cout << "Enter the textbook author: " << endl;
	strm >> obj.author;
	cout << "Enter the textbook publisher: " << endl;
	strm >> obj.publisher;
	return strm;
}
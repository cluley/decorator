#include <iostream>

#include "decorator.h"

using namespace std;

int main() {
	auto text_block = new ItalicText(new BoldText(new Text()));
	text_block->render("Hello world");
	cout << endl;

	auto text_block_2 = new Paragraph(new Reversed(new Text()));
	text_block_2->render("Hello world");
	cout << endl;

	auto link_block = new Link(new Text());
	link_block->render("netology.ru", "Hello world");
	cout << endl; 

	return 0;
}
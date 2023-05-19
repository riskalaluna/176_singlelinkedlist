#include <iostream>
using namespace std;

struct Node
{
	int noMhs;
	string nama;
	Node* next;
};

Node* START = NULL;

void addNote() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "Masukkan NIM: ";
	cin >> nim;
	cout << "Masukkan nama: ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->nama = nama;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << " NIM sudah ada " << endl;
			return;
		}


		Node* current = START;
		Node* previous = START;

		while ((current != NULL) && (nim >= current->noMhs))
		{
			if (nim == current->noMhs) {
				cout << "NIM sudah ada" << endl;
				return;
			}
			previous = current;
			current = current->next;
		}
	}
}
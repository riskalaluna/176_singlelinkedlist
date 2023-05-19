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
}
#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

Node* createLL() {
	struct Node* p = NULL, *prev = NULL;

	int size;
	cin >> size;

	while (size--) {

		Node* n = new Node;

		int i = 0;
		cin >> i;
		n->data = i;

		if (p == NULL)
			p = n;
		else
			prev->next = n;
		prev = n;
	}

	return p;
}
void printNode(Node * head) {

	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Node* head = createLL();
	printNode(head);

}
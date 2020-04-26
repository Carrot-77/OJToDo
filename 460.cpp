/*************************************************************************
    > File Name: 460.cpp
    > Author: 冲鸭！小星星
    > Mail: N0 Mail! 
    > Created Time: 2020年01月22日 星期三 15时00分34秒
 ************************************************************************/

#include<iostream>

#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

typedef struct node {
	int data;
	struct node *next;
} Node;

Node *circle_create(int n);
void count_off(Node *head, int n, int m);

int main() {
	int n, m;
	cin >> n >> m;
	Node *head = circle_create(n);
	count_off(head, n, m);
	return 0;
}

Node *circle_create(int n) {
	Node *temp, *new_node, *head;
	int i;
	temp = (Node *) malloc(sizeof(Node));
	head = temp;
	head->data = 1;
	for (int i = 2; i <= n; i++) {
		new_node = (Node *) malloc(sizeof(Node));
		new_node->data = i;
		temp->next = new_node;
		temp = new_node;
	}
	temp->next = head;
	return head;
}

void count_off(Node *head, int n, int m) {
	int i = 0;
	Node* temp;
	temp = (Node*)malloc(sizeof(Node));
	temp->next = head;
	for (int j = 1; j <= n; j++) {
		head = head -> next;
		temp = temp -> next;
	}
	while (i < n) {
		for (int j = 1; j < m; j++) {
			head = head -> next;
			temp = temp -> next;
		}
		//cout << head -> data << endl;
		head = head -> next;
		temp -> next = head;
		i++;
	}
	cout << head ->data << endl;
	return ;
}

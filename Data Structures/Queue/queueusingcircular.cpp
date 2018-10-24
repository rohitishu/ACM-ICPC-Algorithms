	//push(last) or pop(front) using circularlinkedlist in queue
	
	#include<bits/stdc++.h>
	using namespace std;
	struct node{
		int data;
		node* next;
	}*last=NULL;
	void push(int data)
	{
		node *newnode = new node;
		newnode->data = data;
		newnode->next = NULL;
		if(last==NULL){
			newnode->next = newnode;
			last=newnode;
		}
		else{
			newnode->next = last->next;
			last->next = newnode;
			last=newnode;
		}
	}
	int front()
	{
		if(last==NULL)
			return -1;
		return last->next->data;
	}
	void pop()
	{
		if(last==NULL)
			cout<<"UderFlow"<<endl;
		else
		{
			node* curr = last->next;
			int data = curr->data;
			if(last->next==last)
				last = NULL;
			else
			{
				last->next=last->next->next;
				delete curr;
				return data;
			}
		}
	}
	int main()
	{
		int c;
		while(1)
		{
			cout<<"1.PUSH"<<endl;
			cout<<"2.POP"<<endl;
			cout<<"3.Front"<<endl;
			cout<<"4.Exit"<<endl;
			cout<<"ENter choice";
			cin>>c;
			switch(c)
			{
				case 1: cout<<"ENter data"<<endl;
				cin>>data;
				push(data);
				break;
				case 2:cout<<"Popped elemnt:"<<pop()<<endl;
				break;
				case 3:cout<<"front elemnt: "<<front()<<endl;
				break;
				case 4:exit(0);
				
			}
		}
		
	}

#include<iostream>
#define MAX 10
using namespace std;

int st[MAX], top=-1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main(){
	
int val, option;
do{
	cout<<"All possible applications\n";
	cout<<"\n 1. PUSH";
	cout<<"\n 2. POP";
	cout<<"\n 3. PEEK";
	cout<<"\n 4. DISPLAY";
	cout<<"\n 5. EXIT";
	
	cout<<"\nEnter an option: ";
	cin>>option;
	
	switch(option){
		
		case 1:
			cout<<"Enter a no. to be pushed in the stack: ";
			cin>>val;
			push(st,val);
			break;
			
		case 2:
			val = pop(st);
			if(val!=-1)
			cout<<"The value deleted from the stack is "<<val;
			break;
			
		case 3:
			val=peek(st);
			if(val!=-1)
			cout<<"\nThe value stored at the top of the stack is "<<val;
			break;
			
		case 4:
			display(st);
			break;
	}
}

while(option!=5);
return 0;		
	}
	
void push(int st[], int val){
	if(top==MAX-1){
		cout<<"\nStack Overflow";
	}
	else{
		top++;
		st[top]=val;
	}
}

int pop(int st[]){
	int val;
	if(top==-1){
		cout<<"\nStack Underflow";
		return -1;
	}
	else{
		val=st[top];
		top--;
		return val;
	}
}

void display(int st[]){
	int i;
	if(top==-1){
		cout<<"\nStack is empty.";
	}
	else{
		for(i=top;i>=0;i--)
		cout<<st[i];
	}}
	
int peek(int st[]){
	if(top==-1){
		cout<<"Stack is empty.";
		return -1;
	}
	else{
		return (st[top]);
	}
}

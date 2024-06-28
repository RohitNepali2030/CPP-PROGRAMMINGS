//Stack implementation using array

#include<iostream>
#include<conio.h>

using namespace std;

class stack
{
	int size, top;
	int *STACK;
	public:
		stack(int);
		bool full();
		bool empty();
		int pop();
		void push(int item);
		void display();	
		~stack() {delete [] 
		STACK;
		}
};

stack :: stack(int maxsize){
	size = maxsize;
	STACK = new int[size];
	top = -1;
}

bool stack :: full()
{
	if(top == size-1)
		return true;
	else
		return false;
}

bool stack :: empty()
{
	if(top == -1)
		return true;
	else
		return false;
}

int stack :: pop()
{
	int item;
	if(empty())
	{
		cout<<"Stack Underflow";
		return -1;
	}
	else
	{
		item = STACK[top];
		top--;
		return item;
	}		
}

void stack :: push(int item)
{
	if(full())
	{
		cout<<"Stack overflow.";
	}
	else
	{
		top++;
		STACK[top] = item;	
	}	
}

void stack :: display()
{
	int i;
	cout<<"top -> ";
	for(i=top; i>=0; i--)
	{
	    cout<<STACK[i]<<" ";		
	}
}
int main()
{
	int n, size;
	int item;	 
	
	cout<<"Enter Stack Size:";
   	cin>>size;
   	
   	stack s(size);		
	
	 while(1)
     {
        cout<<"STACK OPERATIONS"<<endl;
        cout<<"1. PUSH an ITEM"<<endl;
        cout<<"2. POP an ITEM"<<endl;
        cout<<"3. Exit"<<endl;
        
        cout<<"Stack: "<<endl;       
        s.display();
        
        cout<<endl<<"Choose an option [1-4]: ";
        cin>>n;
        
		switch (n) 
		{
      	case 1:
             cout<<endl<<"Enter an ITEM:";
             cin>>item;
             s.push(item);
             break;
      	case 2:
             item = s.pop();
             if(item != -1)
             	cout<<item<<" is popped.";
             break;
      	case 3:
             exit(0);
      	default:
             cout<<endl<<"Enter correct option!";
      	}        
     }
	return 0;
}

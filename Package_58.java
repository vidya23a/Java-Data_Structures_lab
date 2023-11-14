package p1;
import java.util.Scanner;
public static final MAX=5;
int stack[]=new int[MAX];
class Stack{
	int top=-1;
	void push(int element)
	{
		if(top==MAX-1)
		{	
			System.out.println("Stack full");
			return;
		}
		else
		{
			top++;
			stack[top]=element;
		}
		
	}
	void pop()
	{
		int data;
		if(top==-1)
		{
			System.out.ptintln("Stack empty");
			return;
		}
		else
		{
			data=stack[top];
			top--;
		}
	}
	void display()
	{
		for(int i=0;i<top;i++)
		{
			System.out.println(satck[top]+"\t");
		}
		System.out.println();
	}

}


class Package_58{
	public static void main(string args[]){
   do{
	System.out.println("Enter your choice");
	System.out.println("1 to push");
	System.out.println("2 to pop");
	System.out.println("3 to display");
	System.out.println("4 to exit");
	Scanner s=new Scanner(System.in);
	Stack s1=new Stack();
	int choice=s.nextInt();
	switch(choice)
	{
		case 1:
			s1.push();
			break;
		case 2:
			s1.pop();
			break;
		case 3:
			s1.display();
			break;
		case 4:
			System.out.println("EXCITING...");
	}
     }while(choice!=4);
    }
}
			
	
		
			
		
	
	

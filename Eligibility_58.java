import java.util.Scanner;
class Age_exception extends Exception{
	Age_exception(String str)
	{
		super(str);
	}

}

class Eligibility_58{
	public static void main(String args[]){
	 	Scanner s=new Scanner(System.in);
	 	System.out.println("Enter the age");
	 	int age;
	 	age=s.nextInt();
	 	if(age>=18)
	 	{
	 		System.out.println("You are eligille to vote");
	 	}
	 	else
	 	{
	 	    try{
	 		throw new Age_exception("You are not eligible to vote");
	 	      }
	 	    catch(Age_exception e){
	 	    	System.out.println(e);
	 	    }  
	 	}
	 }
}
	 	
	 		

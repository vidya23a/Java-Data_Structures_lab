import java.util.Scanner;
class Convert{
    void to_binary(int decimal)
    {
        int a=decimal;
        int rem,i=0;
        int arr[]=new int[10];
        while(decimal!=0)
		{
			rem=decimal%2;
			arr[i++]=rem;
			decimal=decimal/2;
			
		}
		System.out.println("The corresponding binary is:");
		for(int j=i;j>=0;j--)
		{
			System.out.print(arr[j]);
		}
		System.out.println();
        
        
    }
    
    
    void to_decimal(int binary)
    {
        int x=binary;
        int add=1;
        int dec=0;
        while(binary!=0)
        {
            int rem=binary%10;
			dec=dec+(rem*add);
			binary=binary/10;
			add=add*2;
        }
        System.out.println("The corresponding decimal is:"+dec);
    }
}
class Binary_decimal_58{
	public static void main (String args[]){
	    Scanner s=new Scanner(System.in);
	    Convert c=new Convert();
	    int choice;
	    do{
	        System.out.println("Enter your choice");
	        System.out.println("1 to convert decimal to binary");
	        System.out.println("2 to convert binary to decimal");
	        System.out.println("3 to exit");
	        choice=s.nextInt();
	        switch(choice){
	            case 1:
	                System.out.println("Enter the decimal");
	                int decimal=s.nextInt();
	                c.to_binary(decimal);
	                break;
	           case 2:
	               System.out.println("Enter the binary");
	               int binary=s.nextInt();
	               c.to_decimal(binary);
	               break;
	           case 3:
	               System.out.println("EXITING...");
	                
	  
	        }
	        
	    }while(choice!=3);
		
		
		
	}
}
		

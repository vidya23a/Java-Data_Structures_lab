import java.io.*;
class File_count_58{
	public static void main(String args[])throws IOException{
		FileInputStream fin=null;
		int i;
		String str="";
		int line_c=0,char_c=0,word_c=0;
		if(args.length!=1)
			System.out.println("Enter the file");
		else
		{
		   
		   	fin=new FileInputStream(args[0]);
			while((i=fin.read())!=-1)
			{
				if((char)i=='\n')
				{
					line_c++;
					word_c++;
					
					
				}
				else if((char)i==' ')
				{
					word_c++;
					char_c++;
				}
				else
				{
					
					char_c++;
				}
				
			}
		
	}	
	fin.close();
	System.out.println("Character_count:"+char_c);
	System.out.println("Word_count:"+word_c);
	System.out.println("Line_count:"+line_c);
}
}
				
					
	

import java.io.*;
class File_cpy_58{
	public static void main(String args[])throws IOException{
		FileInputStream fin=null;
		FileOutputStream fout=null;
		int i;
		String str="";
		if(args.length!=2)
			System.out.println("Enter the input and output files");
		else
		{
			try{
				fin=new FileInputStream(args[0]);
				fout=new FileOutputStream(args[1]);
				while((i=fin.read())!=-1)
				{	
					if((char)i!='\0')
					{
						str=str+(char)i;
					}
					fout.write(str.getBytes());
					str="";
				}
			}
			catch(FileNotFoundException e)
			{
				System.out.println(e);
			}
			finally{
				try{
				fin.close();
				fout.close();
			}
			catch(Exception e1)
			{
			System.out.println(e1);
			
		}}
		}
	}
}	
					
					
		

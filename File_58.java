import java.io.*;
class File_58{
	public static void main(String args[]) throws IOException{
		FileInputStream fin=null;
		FileOutputStream feven=null;
		FileOutputStream fodd=null;
		
		if(args.length!=3)
			System.out.println("Enter the files");
		else
		{	
			int i;
			String str="";
			try{
				fin=new FileInputStream(args[0]);
				feven=new FileOutputStream(args[1]);
				fodd=new FileOutputStream(args[2]);
				while((i=fin.read())!=-1)
				{
					if((char)i!='\n')
					{
						str=str+(char)i;
					}
					else{
						System.out.println(str);
						int num=Integer.parseInt(str);
						if(num%2==0)
						{
							feven.write(str.getBytes());
							feven.write("\n".getBytes());
						}
						else
						{
							fodd.write(str.getBytes());
							fodd.write("\n".getBytes());
						}str="";
					}
				}
			}
			catch(FileNotFoundException e){
				System.out.println(e);
				}
			catch(IOException e1){
				System.out.println(e1);
				}
			
			finally{

					fin.close();
				
					feven.close();
				
					fodd.close();
				}
			}
		}
	}

							

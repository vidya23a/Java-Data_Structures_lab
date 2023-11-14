class Decimal_bin_58{
	public static void main(String args[]){
		int dec=10;
		int i=0;
		int arr[]=new int[20];
		while(dec!=0)
		{
			arr[i++]=dec%2;
			dec/=2;
		}
		
		for(int j=i;j>=0;j--)
		{
			System.out.print(arr[j]);
		}
		System.out.println();
	}
}
			
		
		

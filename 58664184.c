#include <stdio.h>
int main() 
{
	int Testcases; //number of Testcases
	scanf("%d\n",&Testcases);
	
	while(Testcases--)
	{
	    int Nofingredients,minivalue,count,ratio; //declaration of variables
	    scanf("%d",&Nofingredients);
	    int arr[Nofingredients];
	    
	    for(int i=0;i<Nofingredients;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    minivalue=arr[0];
	    for(int i=1;i<Nofingredients;i++)
	    {
	        if(arr[i]<arr[0])
	        {
	            minivalue=arr[i];
	        }
	    }
	    
	    int j;
	    for(j=minivalue;j>1;j--)
	    {
	        count=0;
	        for(int i=0;i<Nofingredients;i++)
	        {
	            if(arr[i]%j==0)
	            {
	                count++;
	            }
	        }
	        if(count==Nofingredients)
	        {
	            break;
	        }
	    }
	    for(int i=0;i<Nofingredients;i++)
	    {
	        printf("%d\n", arr[i]/j);
	    }
	}
	return 0;
}
//code by bhumika nayak


int maxProfit(int* prices, int pricesSize)
{
	int i,j,max=0,t;
	for(i=0;i<pricesSize-1;i++)
	{
		for(j=i+1;j<pricesSize;j++)
		{
			t=prices[j]-prices[i];
			if(t>max) max=t;
		}
	}
	return max;
 }

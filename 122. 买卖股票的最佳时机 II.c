int maxProfit(int* prices, int pricesSize)
{
	int i,s=0;
	for(i=1;i<pricesSize;i++)
	{
		if(prices[i]>prices[i-1])
		{
			s+=prices[i]-prices[i-1];
		}
	}
	return s;
}

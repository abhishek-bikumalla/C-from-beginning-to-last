int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}

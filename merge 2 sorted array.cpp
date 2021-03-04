#include<iostream>
using namespace std;

void get(int ary[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element : "<<i+1<<" : ";
		cin>>ary[i];
	}
	
}
void print(int ary[], int n)
{
	for(int i=0; i<n; i++)
	{
		
		cout<<ary[i]<<" ";
	}
	cout<<endl;
	
}
int merge(int ary1[], int size1, int ary2[], int size2, int ans[])
{
	int i=0, k=0, j=0;
	
	for( ; i<size1 && j<size2 ; )
	{
		if(ary1[i] < ary2[j])
		{
			ans[k] = ary1[i];
			i++;
			k++;
		}
		else
		{
			ans[k] = ary2[j];
			j++;
			k++;
		}
	}
	while(i<size1)
	{
		ans[k++] = ary1[i];
		i++;
	}
	while(j<size2)
	{
		ans[k++] = ary2[j];
		j++;
	}
}
int main()
{
	int size1, size2,size3;
	int ary1[100], ary2[100], ans[200];
	cout<<"Enter Ary1 Size : ";
	cin>>size1;
	cout<<"Enter ARY2 Size : ";
	cin>>size2;
	size3 = size1+size2;
	cout<<"Array 1\n";
	get(ary1, size1);
	print(ary1, size1);
	cout<<"Array 2\n";
	get(ary2, size2);
	print(ary2, size2);
	cout<<"Merged array : \n";
	merge(ary1, size1, ary2, size2, ans);
	print(ans,size3);
}


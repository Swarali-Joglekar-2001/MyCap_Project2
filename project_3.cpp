#include<iostream>
int main()
{
	int arr[10], i;
	std::cout<<"Enter elements: ";
  
	//Enter elemets as 1 2 3 5 4 
  
	for(i=0;i<5;i++)
	{
	std::cin>>arr[i];  //accept elements in array
	}
	std::cout<<"\nYou entered: ";
	for(i=0;i<5;i++)
	{
	std::cout<<arr[i]<<" ";  //display elements in array
	}
	
	return 0;
	
}

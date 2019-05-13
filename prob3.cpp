#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
	char array[40];
	int position;
	cout << "Please Enter characters: ";
	cin >> array;
	
	position =0;
	while(array[position] !='\0')
		position++;
	cout << "Reversed: ";
	for(int a=position-1;a>=0;a--)
	{
		cout << array[a];
	}
	cout << endl;
	cout<< "\nThe size of the array is: "<< position;
	getch();
	return 0;
}


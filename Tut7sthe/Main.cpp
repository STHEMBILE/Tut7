#include<iostream>
using namespace std;
/////
template<typename T>
void Sort(T *array, int Num)
{
	T Temp;
	for (int i = 0; i < Num-1; i++)
	{
		for (int j = i + 1; j<Num; j++)
		{
			if (array[i]>array[j])
			{
				Temp = array[i];
				array[i] = array[j];
				array[j] = Temp;
			}
		}
	}


}

template<typename T>
void Display(T*array,int Num)
{
	for (int index = 0; index < Num; index++)
	{
		cout << array[index] << " ";
		cout << endl;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	cout << "Integers------------------------------------------------------" << endl;
	int num = 5;
	int B[5] = { 2, 5, 1, 3, 3 };
	Sort(B, num);
	Display(B, num);

	cout << "------------------------" << endl;
	cout << "Characters------------------------" << endl;
	char C[] = { 'E', 'A', 'S', 'D', 'B' };
	Sort(C, num);
	Display(C, num);
}
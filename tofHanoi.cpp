/* The tower of Hanoi problem 
* Author: Giriraj Khatri
* R. No. : 0509
*/

#include<stdio.h>
#include<conio.h>
void towers (int, char, char, char);
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	towers (n, 'A', 'C', 'B');
}
void towers (int n, char frompeg, char topeg, char auxpeg)
{
	if (n == 1)
	{
		printf("%s %c %s %c\n", "move disk 1 from peg",frompeg, "to  peg", topeg);
		return;
	}
	towers (n-1, frompeg, auxpeg, topeg);
	printf("%s %d %s %c %s %c\n", "move disk", n, "from peg", frompeg, "to peg", topeg);
	
	towers(n-1, auxpeg, topeg, frompeg);
	
}

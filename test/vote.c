#include<stdio.h>
#include<stdlib.h>


struct person {
	int id;
	int age;
	int can_vote;
}var1;



struct person {
	int id;
	int age;
	int can_vote;
}var2;

int main()
{

	var1.id = 23;
	var1.age = 312;
	
	var2.id = 23;
	var2.age = 312;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	struct person {
	int id;
	int age;
	int can_vote;
};
	
	struct person yash;
	struct person sood;
	
	yash.id = 357;
	yash.age = 50;

	sood.id = 363;
	sood.age = 11;

	yash.can_vote = yash.age >= 18 ? 1 : 0;
	sood.can_vote = sood.age >= 18 ? 1 : 0;	
}

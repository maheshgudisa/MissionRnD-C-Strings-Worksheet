/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

void reverse(char *str,int len){
	int i=0,j=len-1;
	char temp;
	while(i<j){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
}

int int_to_str(int num,char *str,int a){
	int i=0,j=0;
	while(num!=0){
		str[i]=num%10+'0';
		num=num/10;
		i++;
	}
	while(i<a){
		str[i]='0';
		i++;
	}
	reverse(str,i);
	str[i]='\0';
	return i;
}

int pow(int a,int b){
	int i=0;
	int x=a;
	while(b!=1){
		a=a*x;
		b--;
	}
	return a;
}

void number_to_str(float number, char *str,int afterdecimal){
	int x=number,i=0;
	float y=number-x;
	if(x<0){
		str[i]='-';
		i=int_to_str(-x,str+1,0);
		i++;
		y=-y;
	}
	else
	i=int_to_str(x,str,0);
	if(afterdecimal!=0){
		str[i]='.';
		y=y*pow(10,afterdecimal);
		y=int(y);
		int_to_str(y,str+i+1,afterdecimal);
	}
}

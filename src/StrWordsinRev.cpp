/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void reverse(char *x,char *y){
	char temp;
	while(x<y){
		temp=*x;
		*x=*y;
		*y=temp;
		*x++;
		*y--;
	}
}
void str_words_in_rev(char *input, int len){
	int i=0,j=0;
	while(j<len){
		j++;
		if(input[j]=='\0'){
			reverse(&input[i],&input[j-1]);
		}
		else if(input[j]==' '){
			reverse(&input[i],&input[j-1]);
			i=j+1;
		}
	}
	reverse(&input[0],&input[j-1]);
}


#include<stdio.h>
#include<string.h>

void main(){
	char word1[10],word2[10],temp[10];
	printf("Enter a word: ");
	gets(word1);
	printf("Enter another word: ");
	gets(word2);
	printf("Before swapping value:\nWord1=%s\nWord2=%s\n",word1,word2);
	strcpy(temp,word1);
	strcpy(word1,word2);
	strcpy(word2,temp);
	printf("After swapping value:\nWord1=%s\nWord2=%s",word1,word2);
}

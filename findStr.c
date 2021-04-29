#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int i;
char smallest_word[20] = "z"; //Set the smallest word to z so that the word entered can be compare
char largest_word[20] = ""; //Set the largest word to blank so that any word can be bigger than it
char word[20];
int condition = 1;
while(condition == 1){
printf("Enter word: ");
scanf("%s",&word);
if(strlen(word)==4){ //break condition
break;
}
if(strcmp(word,smallest_word)<0){ //if the word is smaller than smallest_word
strcpy(smallest_word,word);
}
if(strcmp(word,largest_word)>0){ //if the word is larger then the largest_word
strcpy(largest_word,word);
}
}
printf("Smallest word: %s\n", smallest_word);
printf("Largest word: %s\n", largest_word);
return 0;
}



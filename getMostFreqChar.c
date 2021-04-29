#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//This program will find the most used character in a text file
int main()
{
char mostChar; //This is the character with most use frequency
int position = 0, freq = 0, maximumFreq = 0, totalFreq = 0;
int equalFreq[27]; //array to store equal frequency
int frequency[27]; //store all frequency letter

memset(frequency, 0, sizeof(frequency)); //fill all the array
memset(frequency, 0, sizeof(equalFreq)); //fill all the array

FILE *filePointer; //use this to point to the file we want to open
filePointer = fopen("test.txt", "r");
if(filePointer == NULL)
{
	printf("File is not available \n");
}
else
{
while((mostChar = fgetc(filePointer)) != EOF)
{
if(mostChar == '\n')
continue;
if(mostChar >= 'a' && mostChar <= 'z')
position = mostChar - 'a'; //find the character's initial position
else if (mostChar >= 'A' && mostChar <= 'Z')
position = mostChar - 'A';
if ((mostChar >=  'a' && mostChar <= 'z') || (mostChar >= 'A' && mostChar <= 'Z'))
frequency[position] += 1;
}
maximumFreq = 0;

for(freq=0; freq<26; freq++)
{
if (frequency[freq] > 0)
if(maximumFreq < frequency[freq])
{
 position = freq;
 maximumFreq = frequency[freq];
 totalFreq = 0;
}

if(maximumFreq == frequency[freq])
{
equalFreq[totalFreq] = freq;
totalFreq++;
}
}

//Diplaying the result
printf("The most frequent letter is ");
for(freq = 0; freq<totalFreq; freq++)
printf("'%c'", equalFreq[freq] + 'a');
printf(". It appeared %d times.\n", maximumFreq);
}
fclose(filePointer);
return 0;
}

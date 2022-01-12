/* For a given a string(str), find and return the highest occurring character.
Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, return the character which comes first. */

char highestOccurringChar(char input[]) {
    // Write your code here
    char result;
  	int i, len;
  	int max = -1;
  	
  	int freq[256] = {0}; 
 
  	len = strlen(input);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[input[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[input[i]])
		{
			max = freq[input[i]];
			result = input[i];
		}
	}
  	return result;
}
#include "word_count.h"

// implementation details
int word_count(const std::string& line, int start_idx) {

  // YOUR IMPLEMENTATION HERE
  int nwords = 0;
  int space_start = 0;
  for (int i=start_idx; i<line.length(); ++i) {
	  if (line[i] == ' ') {

		  if (i != 0 && i != start_idx)//check if the space is not at index 0 and the space is not at the starting index
			  if (line[i - 1] != ' ')//check if there is a character before the space
				  nwords++;
		  if (line.find_first_of(' ', i + 1) == std::string::npos && line[i + 1] != '\0')//check if it is the last word
			  nwords++;
	  }
	  else if (line.find(' ') == std::string::npos) // if no spaces then it is just one word
		  nwords = 1;
	

  }

  return nwords;
}
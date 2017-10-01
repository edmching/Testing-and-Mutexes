#include "word_count.h"

// implementation details
int word_count(const std::string& line, int start_idx) {

  // YOUR IMPLEMENTATION HERE
  int nwords = 0;

  for (int i=start_idx; i<line.length(); ++i) {
    if (line[i] == ' ' ) {

		if (line.find_last_of(' ', i) > 1)
		{
			if (line[i - 1] != ' ')
				nwords++;
			if (line.find_first_of(' ', i+1) == std::string::npos && line[i + 1] != '\0')
				nwords++;
		}
    }

  }

  return nwords;
}
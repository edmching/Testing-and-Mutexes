#include "word_count.h"

// implementation details
int word_count(const std::string& line, int start_idx) {

  // YOUR IMPLEMENTATION HERE
  int nwords = 0;
  int space_before = 0;
  int space_start = 0;

  for (int i=start_idx; i<line.length(); ++i) {
    if (line[i] == ' ' ) {
		space_before++;
		if (line[0] == ' ')
			space_start++;
		if (line[0] != ' ' || space_start > 1)
		{
			space_start++;
			if (line[i + 1] != ' ' && line[i - 1] != ' ')
			{
				nwords++;
				if (space_before == 1)
					nwords++;
			}
		}
    }

  }

  return nwords;
}
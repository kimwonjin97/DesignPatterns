# Motivation
1. Avoid redundancy when storing data
2. E.g., MMORPG
   1. Plenty of users with identical first/last names
   2. No sense if storing same first/last name over and over again
   3. store a list of names and pointers to them
3. E.g., bold or italic text in the console
   1. Don't want each character to have a formatting character
   2. Operate on ranges(e.g., line number, start/end positions)

Flyweight -> A space optimization technique that lets us use less memory by storing externally the data associated with similar objects.
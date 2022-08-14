# Motivation
1. Algorithms can be decomposed into common parts + specifics
2. Strategy pattern does this through composition
   1. High-level algorithm uses an interface
   2. Concrete implementations implement the interface
3. Template Method does the same thing through inheritance
   1. Overall algorithm makes use of abstract member.
   2. Inheritors override the abstract members
   3. Parent template method invoked

Template method-> Allows us to define the 'skeleton' of the algorithm, with concrete implementation defined in subclasses. 

## Summary

- Define an algorithm at a high level
- Define constituent parts as abstract methods
- Inherit the algorithm class, providing necessary overrides.


# Motivation
1. For some components it only makes sense to have one in the system
   1. Database repository
   2. Object factory
2. E.g., the constructor call is expensive
   1. We only do it once
   2. We provide everyone with the same instance
3. Want to prevent anyone creating additional copies
4. Need to take care of lazy instantiation and thread safety

Singleton -> A componenet which is instantiated only once

## Summary
1. Make a 'safe' singleton is easy
   1. Hide or delete the type's constructor, copy constructor and copy assignment operators
   2. Create a static method that returns a reference to a static member.
   3. Guaranteed to be thread-safe since C++11
2. Types with 'hard' dependencies on singletons are difficult to test
   1. cannot decouple the singleton and supply a fake object
3. Instead of directly using a singleton, consider depending on an abstraction(e.g, an interface)
4. Consider defining singleton lifetime in DI container
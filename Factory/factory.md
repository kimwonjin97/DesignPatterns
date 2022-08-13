# Motivation
1. Object creation logic becomes too convoluted
2. Constructor is not descriptive
   - Name mandated by name of containing type
   - Cannot overload with same sets of arguments with different name
   - Can turn into 'optional parameter hell'

3. Object creation(non-piecewise, unlike Builder) can be outsourced to
   - A seperate function(Factory Method)
   - They may exist in a separate class(Factory)
   - Can create hierarchy of factories with Abstract factory.

Factory -> A Component responsible solely for the wholesale(not piecewise) creation of objects.


### Summary

- A factory method is a static method that creates objects
- A factory can take care of object creation
- A factory can be external or reside inside the object as an inner class.
- Hierarchies of factories can be used to create related objects.
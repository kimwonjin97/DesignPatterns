# Motivation
1. Objects use other objects' fields/properties/members through inheritance and composition
2. Composition lets us make compound objects
   1. E.g., a mathematical expression composed of simple expressions; or 
   2. A grouping of shapes that consists of several shapes
3. Composite design pattern is used to treat both single(scalar) and composite objects uniformly
   1. I.e, Foo and Collection<Foo> have common APIs.

Composite-> A mechanism for treating individual(scalar) objects and compositions of objects in a uniform manner.

## Summary
1. Objects can use other objects via inheritance/composition
2. Some composed and singular objects need similar/identical behaviors
3. Composite design pattern lets us treat both types of obejcts uniformly
4. C++ uses duck typing, expecting enumerable types to provide begin()/end()
5. A single object can masquerade as a collection
   1. Foo* begin() { return this; }
   2. Foo* end() {return this+1;}

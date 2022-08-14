# Motivation
1. Complicated objects(e.g. cars) aren't designed from scratch
   1. They reiterate existing design
2. An Existing(partially or fully constructed) design is a prototype
3. We make a copy(clone) the prototype and customize it
   1. Requires 'deep copy' support
4. We make the cloning environment(e.g. via a Factory)

Prototype -> A partially or fully initialized object that you copy(clone) and make use of.

## Summary
- To implement a prototype, partially construct an object and store it somewhere
- Cone the prototype
  - Implement your own deep copy functionality; or
  - Serialize and deserialize
- Customize the resulting instance
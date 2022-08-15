# Motivation
1. Electrical devices have different power(interface) requirements
   1. Voltage(5V,220V)
   2. Socket/plug type(Europe, UK, USA)
2. We cannot modify our gadgets to support every possible interface
   1. Some support possible(e.g., 120/220V)
3. Thus we use a special device(an adapter) to give us the interface we require from the interface we have.

Adapter -> A construct which adapts an existing interface X to conform to the required interface Y.

## Summary
- Implementing an Adapter is easy
- Determine the API you have and the API you need
- Create a component which aggregates(has a reference to, ...) the adaptee
- Intermediate representations can pile up: use caching and other optimization. 
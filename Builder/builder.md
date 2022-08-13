## Motivation:
- some objects are simple and can be created in a single constructor call
- Other objects require a lot of ceremony to create
- Having an object with 10 constructor arguments is not productive
- Instead, opt for piecewise construction
- Builder provides an API for constructing an object step-by-step

>Builder: When piecewise object construction is complicated provide an API for doing it succintly.

### Summery
1. A builder is a separate component for building an object
2. Can either give builder a **constructor** or return it via a **static function**
3. To make builder fluent, return **this**
4. Different facets of an object can be built with different builders working in tandem via a base class
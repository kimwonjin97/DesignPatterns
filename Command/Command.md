# Motivations

1. Ordinary C++ statements are perishable.
   1. Cannot undo a field/property assignment
   2. Cannot directly serialize a sequence of actions(calls)
2. Want an object that represents an operation
   1. X should change its field Y to the value Z
   2. X should do W()
3. Uses: GUI commands, multi-level undo/redo, macro recording and more!

Command -> An object which represents an instruction to perform a particular action. Contains all the information necessary for the action to be taken. 

## Command Query Separation
1. Command = asking for an action or change(e.g., please set your attack value to 2).
2. Query = asking for information(e.g., please give me your attack value).
3. CQS = having separate means of sending commands and queries.
4. In GoF context, both commands and queries are represented with the command design pattern.

## Summary
- Encapsulate all details of an operation in a separate object
- Define instruction for applying the command(either in the command itself, or elsewhere)
- Optionally define instructions for undoing the command.
- Can create composite commands(a.k.a macros)
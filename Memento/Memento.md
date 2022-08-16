# Motivation

1. An object or system goes through changes
   1. E.g., a bank account gets deposits and withdrawals.
   2. There are different ways of navigating those changes
   3. One way is to record every change(Command) and teach a command to 'undo' itself. 
   4. Another is to simply save snapshots of the system.

Momento -> a token/handle representing the system state. Lets us roll back to the state when the token was generated. May or may not
directly expose state information.

## Summary
1. Mementos are used to roll back states arbitrarily.
2. A memento is simply a token/handle class with(typically) no functions of its own
3. A memento is not required to expose directly the state(s) to which it reverts the system
4. Can be used to implement undo/redo
5. 
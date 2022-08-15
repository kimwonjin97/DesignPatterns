# Motivation
1. We need to be informed when certain things happen
    - Object's field changes
    - Object does something
    - Some external event occurs
2. We want to listen to events and notified when they occur
3. Terminology:
   1. event and subscriber
   2. signal and slot(Boost, Qt, etc.)

Observer -> An observer is an object that wishes to be informed about events happening in the system. The entity generating the events is an observable.

## Summary
1. Two participants
   1. Observable provides a way of subscribing to an event(signal)
   2. Observer performs the subscription
2. Observable implementation is always intrusive (observer doesn't need to be)
3. Multithreaded/reentrant use can cause issues
4. Ready-made implementations of Observer are available.
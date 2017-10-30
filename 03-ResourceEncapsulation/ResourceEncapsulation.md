Resources must be separated and used as intended.
# ResourceEncapsulation_Example:
This is good example of resource encapsulation. Transfer money function in the customer class is set to private, so it is inaccessible from the outside world (i.e. from other classes). Even the Admin can't access this function. Therefore, it is well encapsulated.

# ResourceEncapsulation_NonExample:
This is a bad example of resource encapsulation. Because nothing is encapsulated, all the resource are available to every user including the transfermoney function which was private before is now public.

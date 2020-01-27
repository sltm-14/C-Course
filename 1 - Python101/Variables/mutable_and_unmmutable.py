""" -------------------------------------------------------------------------------------------------------------------------------------
UNMMUTABLE

In python integers are unmmutable, that means that the value will be allocated in a different space of memory everythime it changes,
and X will reference this new memory location.

Because we don't have a reference to the original memory, at some point python garbage collector will automatically release this memory. 
------------------------------------------------------------------------------------------------------------------------------------- """

x = 1
print(id(x))  # It will show the location where X is stored || Output: 2060314544

x = 3
print(id(x))  # It will show the location where X is stored || Output: 2060314576


""" -------------------------------------------------------------------------------------------------------------------------------------
MUTABLE

On the other hand, list are mutable, thats why even if we add or delete its objects, the location does not change.

------------------------------------------------------------------------------------------------------------------------------------- """
x = [1, 2, 3]
print(id(x))  # It will show the location where X is stored || Output: 57933608

x.append(4)
print(id(x))  # It will show the location where X is stored || Output: 57933608

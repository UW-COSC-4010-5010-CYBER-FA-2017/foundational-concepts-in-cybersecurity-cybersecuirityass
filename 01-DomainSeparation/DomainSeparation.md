# DomainSeparation_Example:
In this example Admin has access to all the customer (user) information. while the users have only permission to specific operations only.
There are two users in the program, the firstuser has permission to the # transfermoney function only and similarly the seconduser has permission to deposit function. Eventhough, this is not a realtime situation, I just wrote it like that for the sake of demonstration.

# DomainSeparation_Example:
In this bad example, by defining a pointer admin_p of class admin in the customer class. Any user from the customer class now can access the function in the admin class which was inaccessible before.

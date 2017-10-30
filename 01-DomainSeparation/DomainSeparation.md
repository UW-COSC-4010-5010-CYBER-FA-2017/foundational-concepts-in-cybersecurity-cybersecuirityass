# DomainSeparation_Example:
In this example Admin has access to all the customer (user) information. while the users have only permission to specific operations only.
There are two users in the program, the firstuser has permission to the transfermoney function only and similarly the seconduser has permission to deposit function. Eventhough, this is not a realtime situation, I just wrote it like that for the sake of demonstration.

# DomainSeparation_Non Example:
In this bad example, by defining a pointer admin_p of class admin in the customer class. Any user from the customer class now can access the function adminonly in the admin class which was inaccessible before from the customer class before and also unlike the good example, every user has now permission to every function in the customer class.




![domainseparation](https://user-images.githubusercontent.com/31521112/32199262-653ad278-bd91-11e7-9782-839b34a38fe4.gif)


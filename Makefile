all: DomainSeparation_Example DomainSeparation_NonExample \
ProcessIsolation_Example ProcessIsolation_NonExample \
ResourceEncapsulation_Example ResourceEncapsulation_NonExample \
LeastPrivilege_Example LeastPrivilege_NonExample \
Modularity_Example Modularity_NonExample \
Layering_Example Layering_NonExample \
Abstraction_Example Abstraction_NonExample \
DataHiding_Example DataHiding_NonExample \
Simplicity_Example Simplicity_NonExample \
Minimization_Example Minimization_NonExample

DomainSeparation_Example: ./01-DomainSeparation/src/DomainSeparation_Example.cpp
	g++ -o ./01-DomainSeparation/src/DomainSeparation_Example ./01-DomainSeparation/src/DomainSeparation_Example.cpp

DomainSeparation_NonExample: ./01-DomainSeparation/src/DomainSeparation_NonExample.cpp
	g++ -o ./01-DomainSeparation/src/DomainSeparation_NonExample ./01-DomainSeparation/src/DomainSeparation_NonExample.cpp

ProcessIsolation_Example: ./02-ProcessIsolation/src/ProcessIsolation_Example.cpp
	g++ -std=gnu++11 -o ./02-ProcessIsolation/src/ProcessIsolation_Example ./02-ProcessIsolation/src/ProcessIsolation_Example.cpp

ProcessIsolation_NonExample: ./02-ProcessIsolation/src/ProcessIsolation_NonExample.cpp
	g++ -std=gnu++11 -o ./02-ProcessIsolation/src/ProcessIsolation_NonExample ./02-ProcessIsolation/src/ProcessIsolation_NonExample.cpp

ResourceEncapsulation_Example: ./03-ResourceEncapsulation/src/ResourceEncapsulation_Example.cpp
	g++ -std=gnu++11 -o ./03-ResourceEncapsulation/src/ResourceEncapsulation_Example ./03-ResourceEncapsulation/src/ResourceEncapsulation_Example.cpp

ResourceEncapsulation_NonExample: ./03-ResourceEncapsulation/src/ResourceEncapsulation_NonExample.cpp
	g++ -std=gnu++11 -o ./03-ResourceEncapsulation/src/ResourceEncapsulation_NonExample ./03-ResourceEncapsulation/src/ResourceEncapsulation_NonExample.cpp

LeastPrivilege_Example: ./04-LeastPrivilege/src/LeastPrivilege_Example.cpp
	g++ -std=gnu++11 -o ./04-LeastPrivilege/src/LeastPrivilege_Example ./04-LeastPrivilege/src/LeastPrivilege_Example.cpp

LeastPrivilege_NonExample: ./04-LeastPrivilege/src/LeastPrivilege_NonExample.cpp
	g++ -std=gnu++11 -o ./04-LeastPrivilege/src/LeastPrivilege_NonExample ./04-LeastPrivilege/src/LeastPrivilege_NonExample.cpp

Modularity_Example: ./05-Modularity/src/Modularity_Example.cpp 
	g++ -o ./05-Modularity/src/Modularity_Example ./05-Modularity/src/Modularity_Example.cpp 

Modularity_NonExample: ./05-Modularity/src/Modularity_NonExample.cpp
	g++ -o ./05-Modularity/src/modularity_NonExample ./05-Modularity/src/Modularity_NonExample.cpp

Layering_Example: ./06-Layering/src/Layering_Example.cpp
	g++ -std=gnu++11 -o ./06-Layering/src/Layering_Example ./06-Layering/src/Layering_Example.cpp

Layering_NonExample: ./06-Layering/src/Layering_NonExample.cpp
	g++ -std=gnu++11 -o ./06-Layering/src/Layering_NonExample ./06-Layering/src/Layering_NonExample.cpp

Abstraction_Example: ./07-Abstraction/src/Abstraction_Example.cpp
	g++ -std=gnu++11 -o ./07-Abstraction/src/Abstraction_Example ./07-Abstraction/src/Abstraction_Example.cpp

Abstraction_NonExample: ./07-Abstraction/src/Abstraction_NonExample.cpp
	g++ -std=gnu++11 -o ./07-Abstraction/src/Abstraction_NonExample ./07-Abstraction/src/Abstraction_NonExample.cpp

DataHiding_Example: ./08-DataHiding/src/DataHiding_Example.cpp
	g++ -std=gnu++11 -o ./08-DataHiding/src/DataHiding_Example ./08-DataHiding/src/DataHiding_Example.cpp

DataHiding_NonExample: ./08-DataHiding/src/DataHiding_NonExample.cpp
	g++ -std=gnu++11 -o ./08-DataHiding/src/DataHiding_NonExample ./08-DataHiding/src/DataHiding_NonExample.cpp

Simplicity_Example: ./09-Simplicity/src/Simplicity_Example.cpp 
	g++ -o ./09-Simplicity/src/Simplicity_Example ./09-Simplicity/src/Simplicity_Example.cpp 

Simplicity_NonExample: ./09-Simplicity/src/Simplicity_NonExample.cpp
	g++ -o ./09-Simplicity/src/Simplicity_NonExample ./09-Simplicity/src/Simplicity_NonExample.cpp

Minimization_Example: ./10-Minimization/src/Minimization_Example.cpp 
	g++ -o ./10-Minimization/src/Minimization_Example ./10-Minimization/src/Minimization_Example.cpp 

Minimization_NonExample: ./10-Minimization/src/Minimization_NonExample.cpp
	g++ -o ./10-Minimization/src/Minimization_NonExample ./10-Minimization/src/Minimization_NonExample.cpp

clean:
	rm ./01-DomainSeparation/src/DomainSeparation_Example ./01-DomainSeparation/src/DomainSeparation_NonExample \
./02-ProcessIsolation/src/ProcessIsolation_Example ./02-ProcessIsolation/src/ProcessIsolation_NonExample \
./03-ResourceEncapsulation/src/ResourceEncapsulation_Example ./03-ResourceEncapsulation/src/ResourceEncapsulation_NonExample \
./04-LeastPrivilege/src/LeastPrivilege_Example ./04-LeastPrivilege/src/LeastPrivilege_NonExample \
./05-Modularity/src/Modularity_Example ./05-Modularity/src/Modularity_NonExample \
./06-Layering/src/Layering_Example ./06-Layering/src/Layering_NonExample \
./07-Abstraction/src/Abstraction_Example ./07-Abstraction/src/Abstraction_NonExample \
./08-DataHiding/src/DataHiding_Example ./08-DataHiding/src/DataHiding_NonExample \
./09-Simplicity/src/Simplicity_Example ./09-Simplicity/src/Simplicity_NonExample\
./10-Minimization/src/Minimization_Example ./10-Minimization/src/Minimization_NonExample	

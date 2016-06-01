#include <stdio.h>
#include <stdlib.h>
#include "Employee.h"
#include "ArrayList.h"
int main()
{
    ArrayList* pArrayEmployee = NULL;
    pArrayEmployee = al_newArrayList();
    Employee* empleado1, *empleado2;
    Employee* empleado3;
    int lenght;

    empleado1 = newEmployee(12, "gustavo", "petruzzi");
    empleado2 = newEmployee(14, "francisco", "petruzzi");
    pArrayEmployee->add(pArrayEmployee, empleado1);
    pArrayEmployee->add(pArrayEmployee, empleado2);

    //al_add(pArrayEmployee, empleado3);

    lenght = al_len(pArrayEmployee);
    printf("tamanio array :%d\n", lenght);
    //printEmployee(empleado1);
    //printEmployee(empleado2);
    printArrayListEmployee(pArrayEmployee);
    printf("DESPUES\n");
    pArrayEmployee->deleteArrayList(pArrayEmployee);
    printArrayListEmployee(pArrayEmployee);
    return 0;
}

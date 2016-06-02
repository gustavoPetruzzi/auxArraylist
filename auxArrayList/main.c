#include <stdio.h>
#include <stdlib.h>
#include "Employee.h"
#include "ArrayList.h"
int main()
{
    ArrayList* pArrayEmployee = NULL;
    pArrayEmployee = al_newArrayList();
    Employee* empleado1, *empleado2;
    Employee* empleado3, *empleado4;
    Employee* empleadoTest = NULL;
    int lenght;
    int auxInt;
    empleado1 = newEmployee(12, "gustavo", "petruzzi");
    empleado2 = newEmployee(14, "francisco", "petruzzi");
    empleado4 = newEmployee(0, "empleado", "seteado");
    empleado3 = newEmployee(22, "Empleado", "push");
    pArrayEmployee->add(pArrayEmployee, empleado1);
    pArrayEmployee->add(pArrayEmployee, empleado2);
    pArrayEmployee->add(pArrayEmployee, empleado4);
    //al_add(pArrayEmployee, empleado3);

    lenght = al_len(pArrayEmployee);
    printf("tamanio array :%d\n", lenght);
    //printEmployee(empleado1);
    //printEmployee(empleado2);
    printf("EMPLEADOS\n");
    printArrayListEmployee(pArrayEmployee);
    printf("\nPROBANDO GET:\n");
    /*
    empleado3 = al_get(pArrayEmployee, 0);
    printEmployee(empleado3);
    auxInt = al_contains(pArrayEmployee, empleado1);
    printf("\nal_contains = %d\n", auxInt);
    auxInt = al_indexOf(pArrayEmployee, empleado1);
    printf("\nIndex de gustavo  Petruzzi: %d \n", auxInt);
    auxInt = al_set(pArrayEmployee, 1, empleado4);
    empleado3 = al_get(pArrayEmployee, 1);
    printf("\nEMPLEADO SETEADO EN INDICE 1:\n");
    //printEmployee(empleado3);
    */
    printf("\nPROBANDO ANTES POP\n");
    printArrayListEmployee(pArrayEmployee);
    empleado3 = al_pop(pArrayEmployee, 1);
    printf("\nPROBANDO DESPUES POP\n");
    printArrayListEmployee(pArrayEmployee);

    /*
    printf("SIZE: %d", pArrayEmployee->size);
    empleado3 = al_pop(pArrayEmployee, 1);
    printf("EMPLEADO BORRADO");
    printEmployee(empleado3);
    printf("\nREMUEVO INDICE con pop 1\n");
    printArrayListEmployee(pArrayEmployee);
    auxInt = al_clear(pArrayEmployee);
    printf("\nDESPUES CLEAR\n");
    printArrayListEmployee(pArrayEmployee);
    auxInt = al_deleteArrayList(pArrayEmployee);
    printArrayListEmployee(pArrayEmployee);
    */

    return 0;
}

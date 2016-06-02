#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include "input.h"
#include <string.h>


char mostrarMenu( char textomenu[], char min, char max )
{
    char opcion;
    int auxInt;

    printf("%s", textomenu);
    fflush(stdin);
    do
    {
        auxInt=getChar(&opcion,"Ingrese opcion: ", "ERROR: Opcion no valida", min, max);
    }while(auxInt!=0);
    return opcion;
}

int compareEmployee(void* pEmployeeA,void* pEmployeeB)
{
    int auxInt;
    Employee *aux, *aux1;
    aux = (Employee*)pEmployeeA;
    aux1 = (Employee*) pEmployeeB;

    auxInt = strcmp(aux->name, aux1->name);
    return auxInt;
}

void printEmployee(Employee* p)
{
    if(p != NULL)
    {
        printf("%d %s %s\n", p->id, p->name, p->lastName);
    }
    else
    {
        printf("puntero == NULL\n");
    }
}


void printArrayListEmployee(ArrayList* lista)
{
    int i;
    Employee* aux;

      if (lista!=NULL && lista->size >0)
      {
          for (i=0;i< lista->len(lista);i++)
          {
              aux=(Employee*) al_get(lista, i);
              printEmployee(aux);
          }
      }
      else
      {
          printf("NO ESTA\n");
      }
}


Employee* newEmployee(int id, char name[],char lastName[])
{
    Employee* returnAux;
    returnAux = (Employee*) malloc(sizeof(Employee));
    if(returnAux != NULL)
    {
        strcpy(returnAux->name, name);
        (returnAux)->id = id;
        strcpy((*(returnAux)).lastName , lastName);
        (returnAux)->isEmpty = 0;
    }
    return returnAux;
}

void datosEmployee(int* id, char* name, char* lastName)
{
    int auxId;
    char auxname[52];
    char auxLastName[52];
    int auxInt;

    do
    {
        auxInt = getInt(&auxId, "Ingrese id: ", "ERROR: solamente numero", 0, 1001);
    }while(auxInt!=0);
    *id = auxId;

    do
    {
        auxInt = getName(auxname, "Ingrese el nombre: ", "ERROR: maximo 51 caracteres", 0, 52);
    }while(auxInt!=0);
    strcpy(name, auxname);

    do
    {
        auxInt = getName(auxLastName, "Ingrese el apellido: ", "ERROR: maximo 51 caracteres", 0, 52);
    }while(auxInt!=0);
    strcpy(lastName, auxLastName);
}

Employee* pushEmployee(int* Index, ArrayList* lista)
{
    int auxId;
    int auxInt;
    int auxIndex;
    char auxName[52];
    char auxLastname[52];
    int i;
    Employee* auxEmployee = NULL;
    Employee* isEmployee;
    if(lista != NULL)
    {

        auxInt = getInt(&auxIndex, "Ingrese el indice: ", "ERROR: Numero no valido", 0, 1001);
        if(auxInt !=0)
        {
            return NULL;
        }
        *Index = auxIndex;
        datosEmployee(&auxId, auxName, auxLastname);

        for(i=0; i<lista->len(lista); i++)
        {
            isEmployee = (Employee*) al_get(lista, i);
            if(isEmployee->id == auxId)
            {
                printf("Ya existe alguien con ese id!\n");
                return auxEmployee;
            }
        }
        auxEmployee = newEmployee(auxId, auxName, auxLastname);

    }
    return auxEmployee;
}
void listarDesdeHasta(ArrayList* lista)
{
    int desde, hasta, auxInt;
    ArrayList* auxLista;
    if(lista !=NULL)
    {
        do
        {
            auxInt = getInt(&desde, "Ingrese desde cuando desea listar: ", "ERROR: numero no valido", -1, lista->len(lista));
        }while(auxInt!= 0);

        do
        {
            auxInt = getInt(&hasta, "Ingrese hasta cuando desea lista: ", "ERROR numero no valido", desde, lista->len(lista));
        }while(auxInt!=0);
        auxLista = al_subList(lista, desde, hasta);
        printArrayListEmployee(auxLista);
        free(auxLista);
    }
}

/*
    utest example : Unit test examples.
    Copyright (C) <2016>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOU; ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "ArrayList.h"
#ifndef __EMPLOYEE
#define __EMPLOYEE
struct
{
    int id;
    char name[51];
    char lastName[51];
    int isEmpty;

}typedef Employee;
#endif // __EMPLOYEE

int compareEmployee(void* pEmployeeA,void* pEmployeeB);
void printEmployee(Employee* p);
Employee* newEmployee(int id, char name[],char lastName[]);
void printArrayListEmployee(ArrayList* lista);
int getIndex(int* indice,ArrayList* lista);
void datosEmployee(int* id, char* name, char* lastName);
Employee* pushEmployee(int* Index, ArrayList* lista);
void listarDesdeHasta(ArrayList* lista);


#ifndef BARKESHLI__FUN_H__
#define BARKESHLI__FUN_H__

#include <iostream>
#include <iomanip>
using namespace std;

void init_array(int a[], int size);
void append_array(int a[], int &size, int item);
void print_array(int a[], int size);
int* find(int a[], int size, int key);
int whats_here(int* arr, int size, int* here);
#endif // BARKESHLI__FUN_H__

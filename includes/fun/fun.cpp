#include "fun.h"


void init_array(int a[], int size){
  
}
void append_array(int a[], int &size, int item){
  cout << "appending into array: [" << size << "], item: " << item << endl;

  int *ptr;
  ptr = &a[0];
  ptr = ptr + size; // move ptr to the end
  *ptr = item;      //write item to the end
  size++;
}

void print_array(int a[], int size){
  cout << "printing array: [" << size << "]" << endl;
  int *start_ptr = &a[0];
  int *end_ptr = start_ptr + size;

  for (int *w = start_ptr;
                       w != end_ptr;
                       w++){
    cout << setw(4) << *w;
  }
  cout << endl;
}

int* find(int a[], int size, int key){
  int *start_ptr = &a[0];
  int* w = start_ptr;
  int *end_ptr = start_ptr + size -1;


  while(w!=end_ptr){
    if (*w == key){
      // return w - start_ptr;  //if you want to return an index.
      return w;
    }
    w++;
  }
  return nullptr;  //has a value of zero. Do NOT use zero.
  
}


int whats_here(int*arr , int size, int* here){
  int zero = *arr;
  int one = arr[1];
  int two = *(arr + 2);  //NEVER use this!
  int* two_ptr = arr + 2;
  two = *two_ptr;
  if (here < arr)
  {
    return -1;  //be offended!
  }
  if (here >arr +size){
    return -1;  //be triggered.
  }
  return *here;
}

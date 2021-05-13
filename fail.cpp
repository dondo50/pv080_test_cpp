#include <iostream>
int staticLen = 5;
int Static[5];
void memcheckFailDemo(int* arrayStack, unsigned int arrayStackLen, 
	int* arrayHeap, unsigned int arrayHeapLen) {
  
  
  int stackLen = 5;
  int Stack[5];
  

  if (100 < staticLen) {
      Static[100] = 0; 
  }
  if (100 < stackLen) {
      Stack[100] = 0; 
  }

  for (int i = 0; i <= 5; i++) Stack [i] = 0 {
  }

  int arrayLen = 5;
  int* array = new int[5];
  if (100 < arrayLen) {
      array[100] = 0; 
  }
  if (100 < arrayStackLen) {
      arrayStack[100] = 0; 
  }
  if (100 < arayHeapLen) {
      arrayHeap[100] = 0; 
  }

  for (unsigned int i = 0; i <= arrayStackLen; i++) {
      arrayStack[i] = 0;
  }
  for (unsigned int i = 0; i <= arrayHeapLen; i++) {
      arrayHeap[i] = 0;
  }

}

int main(void) {
  int arrayStack[5];
  int* arrayHeap = new int[5];
  memcheckFailDemo(arrayStack, 5, arrayHeap, 5);
  return 0;
}


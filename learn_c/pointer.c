// 변수는 컴퓨터의 메모리에 생성 됨 
// 변수는 메모리의 특정 장소에 위치하고 있으므로
// 메모리 주소로도 표현 가능 

// 변수의 메모리 주소 구하기 : &변수 
// 메모리 주소는 실행 시 마다 변경 
#include <stdio.h> 
#include <stdlib.h>  // malloc free 사용 
#include <string.h> // memeset 
int main()
{  

    // int num = 10 ; 
    // printf("%p\n", &num); 
    // // %p : 포인터 약어 , %x : 16진수  포인터 &변수 
    // 포인터 메모리 주소 저장하기 * 사용  
    // 포인터 변수 자료형 *포인터이름 
    // 메모리 주소 저장 용도, 값 직접 저장 불가 (할수도있음) 
    // Linked List 
    // 자신의 값 + 다음요소의 포인터  
    // struct 자신값 + 다음 요소 포인터 
//    int *numPtr;  // int pointer (pointer to int )
//    int num1 = 10;
//    numPtr = &num1; 

    // 역참조 연산자  * pointer
   // 포인터 변수는 메모리 주소를 가지고 있음.
//    // 이 메모리 주소를 이용해서 값을 가져와보자 


//     long long *numPtr1; 
//     float *numPtr2; 
//     char *cPtr1;  

//     long long num1 = 10; 
//     float num2 = 3.5f;
//     char c1 = 'a'; 

//     numPtr1 = &num1; 
//     numPtr2 = &num2; 
//     cPtr1 = &c1; 

//     // 선언하는 자료형에 따라 메모리 접근 방식 상이 
//     printf("%lld\n", *numPtr1); 
//     printf("%f\n", *numPtr2); 
//     printf("%c\n", *cPtr1); 

    // void pointer : 자료형이 정해지지 않은 포인터 (범용 포인터)
    // 역참조 불가 
    // 변수 지정 불가 
    // 다양한 자료형을 받아드릴 때, 자료형을 숨기고 싶을 때, 반환 포인터를 다양하게 저장  
    // int num1 = 10 ; 
    // char c1 = 'a'; 
    // int *numPtr1 = &num1; 
    // char *cPtr1 = &c1; 

    // void *ptr; 

    // ptr = numPtr1; 
    // ptr = cPtr1; 

    // numPtr1 = ptr; 
    // cPtr1 = ptr; 
    // 이중 포인터 : 포인터의 포인터 (포인터의 메모리 주소 저장)
    // 
    // int *numPtr; 
    // int num1 = 10 ;
    // printf("%d\n", *numPtr); // num1의 메모리 주소로 접근 후 값 가져옴 
    // numPtr = &num1; 
    // printf("%p\n", numPtr); // num1의 메모리 주소로 접근 후 값 가져옴 
    // *numPtr = 20; 
    // printf("%d\n", *numPtr); // num1의 메모리 주소로 접근 후 값 가져옴 
    // printf("%d\n", num1); // num1의 메모리 주소로 접근 후 값 가져옴 
    
//    printf("%p\n", numPtr);
//    printf("%p\n", &num1);
   // 포인터를 선언할 때 *는 이 변수가 포인터다
   // 포인터에 사용할 때 이 포인터의 메모리 주소를 역참조 하겠다 = 값 가져 오겠다   
   
   
//    int *numPtr1; 
//    int **numPtr2;  // 포인터의 메모리 주소는 일반 포인터 저장 불가, 이중 포인터에 저장 가능  pointer to pointer to int 
//    int num1 = 10; 
   
//    numPtr1 = &num1; 
//    numPtr2 = &numPtr1; 

//    printf("%d\n", **numPtr2);
   
   //  
    /* 
    malloc 함수로 원하는 만큼 메모리 할당 가능 (memory allocation)
    malloc -> 사용 -> Free (해제)
    메모리 할당 
    포인터 = malloc(크기) byte 단위 
    void *malloc(size_t, size); 
    성공 -> 메모리 주소 반환, 실패 null 반환 
    stdlib.h 파일 내 선언 
    */
   /*
   int num1 = 20; 
   int *numPtr1; 

   numPtr1 = &num1; 
 
   int *numPtr2; 
   numPtr2 = malloc(sizeof(int));  // 할당할 메모리 공간의 크기  
   printf("%p\n", numPtr1); // 메모리 주소 변수는 스택에 생성 
   printf("%p\n", numPtr2); // 메모리 주소 heap 부분의 메모리 할당 => 반드시 해제 해줘야한다 
   free(numPtr2); // malloc 함수 할당 부분 메모리 해제 필수 => 메모리 누수 각 
    */

   /*
   int *numPtr; 
   numPtr = malloc(sizeof(int)); 
   *numPtr = 10; 
   printf("%d\n", *numPtr);
   free(numPtr);
   */ 

  /*
    memset 
    메모리에 특정 값 설정 (원하는 크기, 바이트 만큼)
    메모리를 설정한다. memset (memory set), 
    stirng.h 또는 memory.h 헤더 파일 

  */
   
   /*
   long long *numPtr = malloc(sizeof(long long));
   memset(numPtr, 0x27, 8); 
   printf("0x%llx\n", *numPtr);  
   free(numPtr);
   */
   /*
   널 포인터 사용하기 
   
   int *numPtr1 = NULL;
   printf("%p\n", numPtr1); 

   if (numPtr1 == NULL)
   {
       numPtr1 = malloc(1024); 
   }
   return 0; 
   
   */
  printf("hello");
}  
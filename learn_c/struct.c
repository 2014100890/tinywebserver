#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일
#include <stdlib.h> // malloc, free 함수 

/*
    구조체 : 타입이 다른 데이터 묶어서 사용 
    기본 자료형 조합 => 파생형(derived type)

    struct 구조체 이름 변수이름;  
    메인 함수 바깥에 정의 

struct  Person{
    char name[20]; // member : 구조체 안에 있는 변수 
    int age;
    char address[100]; 
}; 

int main(){

    struct Person p1; 
    strcpy(p1.name, "김홍지"); 
    p1.age = 30; 
    strcpy(p1.address, "용산시 한남동");
    printf("이름 : %s\n", p1.name); 
    printf("나이 : %d\n", p1.age); 
    printf("주소 : %s\n", p1.address);  
    return 0; 
}
*/ 

/*
    구조체 생성과 변수 동시 선언

    struct  Person{
        char name[20]; // member : 구조체 안에 있는 변수 
        int age;
        char address[100]; 
    } p1; 

    int main(){
 
        strcpy(p1.name, "김홍지"); 
        p1.age = 30; 
        strcpy(p1.address, "용산시 한남동");
        printf("이름 : %s\n", p1.name); 
        printf("나이 : %d\n", p1.age); 
        printf("주소 : %s\n", p1.address);  
        return 0; 
    }

*/
/*
    typedef 구조체 선언 시 struct 키워드 생략 
    typedef 구조체 정의 및 별칭 지정 (괄호 하단)
    구조체 이름 : 앞에 "_" 붙이는 것 관례 

typedef struct _Person{
    char name[20];
    int age;
    char address[100];
} Person; #


int main()
{
    Person p1;  // struct _Person p1; 
    strcpy(p1.name, "김홍지"); 
    p1.age = 30; 
    strcpy(p1.address, "용산시 한남동");
    printf("이름 : %s\n", p1.name); 
    printf("나이 : %d\n", p1.age); 
    printf("주소 : %s\n", p1.address);  

    return 0; 

}
*/
/* 




    익명 구조체 사용 
    구조체 이름 생략, 구조체 별칭으로 변수 선언

typedef struct{
    char name[20];
    int age;
    char address[100];
} Person; 

int main()
{
    Person p1;  
    strcpy(p1.name, "김홍지"); 
    p1.age = 30; 
    strcpy(p1.address, "용산시 한남동");
    printf("이름 : %s\n", p1.name); 
    printf("나이 : %d\n", p1.age); 
    printf("주소 : %s\n", p1.address);  

    return 0; 

}
*/

/*
    구조체 포인터 선언 및 메모리 할당 
    
    // 구조체는 멤버 변수가 여러개 들어있어 크기 큼
    // 구조체 변수끼리 할당하면 모든 멤버 복사해야함 
    // 구조체 변수 일일이 선언해서 사용하는 것은 비효율적 

struct  Person{
    char name[20]; 
    int age;
    char address[100]; 
}; 

int main(){

    // 구조체 포인터 선언 및 메모리 할당
    struct Person *p1 = malloc(sizeof(struct Person));  
    strcpy(p1->name, "홍길동"); // 문자열은 할당 연산자로 저장 불가 
    p1->age = 30; // 구조체 포인터 멤버 접근 시 . 대신 -> 사용 
    strcpy(p1->address, "용산구 한남동"); 

    printf("이름 : %s\n", p1->name); 
    printf("나이 : %d\n", p1->age); 
    printf("주소 : %s\n", p1->address);  

    free(p1); // 할당 메모리 해제 

    return 0; 
}
*/ 
/* 
    구조체 별칭으로 포인트 선언 및 메모리 할당 

typedef struct _Person{
    char name[20]; 
    int age;
    char address[100]; 
} Person; 

int main(){

    // 구조체 포인터 선언 및 메모리 할당
    Person *p1 = malloc(sizeof(Person));  
    strcpy(p1->name, "홍길동"); // 문자열은 할당 연산자로 저장 불가 
    p1->age = 30; // 구조체 포인터 멤버 접근 시 . 대신 -> 사용 
    strcpy(p1->address, "용산구 한남동"); 

    printf("이름 : %s\n", p1->name); 
    printf("나이 : %d\n", p1->age); 
    printf("주소 : %s\n", p1->address);  

    free(p1); // 할당 메모리 해제 

    return 0; 
}
*/ 

/*
    구조체 포인터에 구조체 변수의 주소 할당하기 
    구조체 포인터 = &구조체변수; 


struct Person{
    char name[20]; 
    int age;
    char address[100]; 
}; 

int main(){

    // 구조체 포인터 선언 및 메모리 할당

    struct Person p1; 
    struct Person *ptr; 
    
    ptr = &p1; 
    ptr->age = 30; 
    printf("나이 : %d\n", p1.age);
    printf("나이 : %d\n", ptr->age);

    free(ptr); // 할당 메모리 해제 

    return 0; 
}

*/ 
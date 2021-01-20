/*
    연결리스트 : 데이터가 담긴 노드(메모리 공간)를 
    일렬로 연결해 놓음

    좋은점 : 리스트의 중간 지점에 노드를 손쉽게 추가하거나 삭제 가능 
    
    단일 연결리스트 : 다른 노드를 가리키는 포인터가 하나씩만 있음 
    한쪽 방향으로만 탐색 가능 
    (data, pointer) -> (data, pointer) -> (data, pointer)

    head node : 데이터 저장 x
    node : 데이터가 저장되는 실제 노드 

    연결리스트에 노드 추가하기 

    1. 노드에 메모리 할당한다. 
    2. next 멤버에 다음 노드의 메모리 주소 저장 
    3. data 멤버에 데이터 저장한다. 
    4. 마지막 노드라면 next 멤버에 null 저장 


*/ 


#include <stdio.h> 
#include <stdlib.h> 

struct NODE{
    struct NODE *next; // 다음 노드의 주소를 저장할 포인터 
    int data; // 데이터를 저장할 멤버 
}; 

void addFirst(struct NODE *target, int data) // target : 기준 노드 포인터, data : 새 노드 데이터 
{
    struct NODE *newNode = malloc(sizeof(struct NODE));
    newNode->next = target->next; 
    newNode->data = data; 
    target->next = newNode; 
}
int main(){

    struct NODE *head = malloc(sizeof(struct NODE)); 
    head->next = NULL;
    addFirst(head, 10); 
    addFirst(head, 20); 
    addFirst(head, 30);  
    struct NODE *node1 = malloc(sizeof(struct NODE)); 

    head->next = node1; 
    node1->data = 10; 

    struct NODE *node2  = malloc(sizeof(struct NODE)); 
    node1->next = node2; 
    node2->data = 20;

    node2->next = NULL; 
 
    struct NODE *curr = head->next; // 연결리스트 순회 

    while (curr != NULL)
    {
        printf("%d\n", curr->data); 
        curr = curr->next; 
    }

    free(node2);
    free(node1);
    free(head); 

    return 0;  
}
 




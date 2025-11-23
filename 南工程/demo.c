#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构体
struct Node
{
    int data;          // 节点存储的数据
    struct Node *next; // 指向下一个节点的指针
};

// 函数声明
// 创建新节点
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("内存分配失败!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// 在链表开头插入节点
void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head; // 新节点指向原来的头节点
    *head = newNode;       // 更新头指针指向新节点
    printf("在开头插入: %d\n", data);
}
// 在链表末尾插入节点
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);

    // 如果链表为空，新节点成为头节点
    if (*head == NULL)
    {
        *head = newNode;
        printf("在末尾插入(头节点): %d\n", data);
        return;
    }

    // 遍历到链表末尾
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // 在末尾插入新节点
    temp->next = newNode;
    printf("在末尾插入: %d\n", data);
}
// 显示链表所有节点
void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("链表为空!\n");
        return;
    }

    printf("链表内容: ");
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        if (temp->next != NULL)
        {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf(" -> NULL\n");
}
// 删除指定值的节点
void deleteNode(struct Node **head, int key)
{
    if (*head == NULL)
    {
        printf("链表为空，无法删除!\n");
        return;
    }

    struct Node *temp = *head;
    struct Node *prev = NULL;

    // 如果要删除的是头节点
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next; // 更新头指针
        free(temp);         // 释放内存
        printf("删除头节点: %d\n", key);
        return;
    }

    // 查找要删除的节点
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // 如果没找到
    if (temp == NULL)
    {
        printf("未找到要删除的节点: %d\n", key);
        return;
    }

    // 删除节点
    prev->next = temp->next;
    free(temp);
    printf("删除节点: %d\n", key);
}
// 搜索节点
int searchNode(struct Node *head, int key)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return 1; // 找到
        }
        temp = temp->next;
    }
    return 0; // 未找到
}
// 释放整个链表
void freeList(struct Node **head)
{
    struct Node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        printf("释放节点: %d\n", temp->data);
    }
    printf("链表已完全释放!\n");
}
int main()
{
    struct Node *head = NULL; // 链表头指针，初始为空

    printf("=== C语言链表演示程序 ===\n\n");

    // 在链表末尾插入节点
    printf("1. 在链表末尾插入节点:\n");
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    displayList(head);

    // 在链表开头插入节点
    printf("\n2. 在链表开头插入节点:\n");
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 1);
    displayList(head);

    // 搜索节点
    printf("\n3. 搜索节点:\n");
    int searchValue = 20;
    if (searchNode(head, searchValue))
    {
        printf("找到节点: %d\n", searchValue);
    }
    else
    {
        printf("未找到节点: %d\n", searchValue);
    }

    // 删除节点
    printf("\n4. 删除节点 20:\n");
    deleteNode(&head, 20);
    displayList(head);

    // 尝试删除不存在的节点
    printf("\n5. 尝试删除不存在的节点 100:\n");
    deleteNode(&head, 100);
    displayList(head);

    // 释放整个链表
    printf("\n6. 释放整个链表:\n");
    freeList(&head);
    displayList(head);

    return 0;
}
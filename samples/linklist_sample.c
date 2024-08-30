#include <stdio.h>
#include "linklist.h"

void linklist_sample()
{
    int a = 10, b = 20, c = 12;
    struct list *list = list_new();
    if (!list)
    {
        printf("list new failed\n");
        return;
    }
    //插入到list尾部
    listnode_add(list, &a);
    //插入list头部
    listnode_add_head(list, &b);
    //插入到指定节点之后
    listnode_add_after(list, listnode_lookup(list, &b), &c);

    printf("a=%d[%p] b=%d[%p] c=%d[%p]\n", a, &a, b, &b, c, &c);
    struct listnode *node = NULL;
    struct listnode *next_node = NULL;
    int *data = NULL;
    for (ALL_LIST_ELEMENTS(list, node, next_node, data)) 
    {
        printf("%p %d\n", data, *data);
    }
    for (ALL_LIST_ELEMENTS_RO(list, node, data))
    {
        printf("%p %d\n", data, *data);
    }
}
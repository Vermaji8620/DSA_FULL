// ABSTRACT DATA TYPE-------

// #include <stdio.h>
// #include <stdlib.h>

// struct esehi
// {
//     int total_size;
//     int used_size;
//     int *ptr;
// };

// void createArray(struct esehi *a, int tSize, int uSize)
// {
//     (*a).total_size = tSize;
//     (*a).used_size = uSize;
//     (*a).ptr = (int *)malloc(tSize * sizeof(int));
// }

// void show(struct esehi *a){
//     for(int i=0; i< (*a).used_size; i++){
//         printf("%d\n", (a->ptr)[i]);
//     }
// }

// void setval(struct esehi *a){int n;
//     for(int i=0; i< (*a).used_size; i++){
//         printf(" enter the element %d", i);
//         scanf("%d",&n);((*a).ptr)[i]= n;
//     }
// }

// int main()
// {
//     struct esehi marks;
//     createArray(&marks, 10, 2);printf("We are running setval now");setval(&marks); printf("We are running show now");show(&marks);
//     return 0;
// }

// INSERTION IN AN ARRAY---------
// #include <stdio.h>
// #include <stdlib.h>

// int insert(int *arr, int n, int insertt, int pos, int tochck)
// {
//     if (n < tochck)
//     {
//         for (int i = n - 1; i >= pos; i--)
//         {
//             arr[i + 1] = arr[i];
//         }
//         arr[pos] = insertt;printf("DONE");
//         return 1;
//     }else{
//     return 0;}
// }

// int main()
// {
//     int arr[10] = {1, 4, 5, 9, 7, 3};
//     int n, pos;
//     printf(" enter the position to insert");
//     scanf("%d", &pos);
//     printf(" enter the element to insert");
//     scanf("%d", &n);
//     if (insert(arr,6, n, pos, 10))
//     {
//         printf("yes inserted\n");
//         for (int i = 0; i < 10; i++)
//         {
//             printf("%d", arr[i]);printf(" ");
//         }
//     }
//     else
//     {
//         printf(" no not inserted");
//     }
// }

// LINKED LIST---------

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedlisttraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node *insertarfirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;
// }

// struct Node *insertarEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     struct Node *p = head;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }

// struct Node *insertarAfterNode(struct Node *head, struct Node *previousnode, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;ptr->next=previousnode->next;
//     previousnode->next=ptr;
//     return head;
// }

// struct Node *insertarIndex(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }

// int main()
// {
//     // creating pointers and then allocating memory for nodes in the linked list in heap-----
//     struct Node *head;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     head->data = 7;
//     struct Node *second;
//     second = (struct Node *)malloc(sizeof(struct Node));
//     head->next = second;
//     second->data = 11;
//     struct Node *third;
//     third = (struct Node *)malloc(sizeof(struct Node));
//     second->next = third;
//     third->data = 41;
//     struct Node *fourth;
//     fourth = (struct Node *)malloc(sizeof(struct Node));
//     third->next = fourth;
//     fourth->data = 66;
//     fourth->next = NULL;
//     linkedlisttraversal(head);
//     // linkedlisttraversal(insertarfirst(head, 56));
//     // linkedlisttraversal(insertarIndex(head, 73, 1));
//     // linkedlisttraversal(insertarEnd(head, 73));
//     // linkedlisttraversal(insertarAfterNode(head, second, 45));
//     return 0;
// }

// INSERTION OF LINKED LIST BY ME----------AND DELETION ALSO
// #include <stdio.h>
// #include <stdlib.h>

// struct linkedlist
// {
//     int data;
//     struct linkedlist *pointer;
// };

// void shownodes(struct linkedlist *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("element: %d\n", ptr->data);
//         ptr = ptr->pointer;
//     }
// }

// struct linkedlist *nodeinsertionatbeginning(struct linkedlist *firstptr, int toinsertdata)
// {
//     struct linkedlist *ptr = (struct linkedlist *)malloc(sizeof(struct linkedlist));
//     ptr->data = toinsertdata;
//     ptr->pointer = firstptr;return firstptr;
// }

// struct linkedlist *nodeinsertionatgivenindex(struct linkedlist *firstptr, int position, int data)
// {
//     struct linkedlist *ptr = (struct linkedlist *)malloc(sizeof(struct linkedlist));
//     struct linkedlist *p = firstptr; int i=0; while(i!=position-1){i++; p=p->pointer; }
//     ptr->pointer=p->pointer; p->pointer=ptr; ptr->data=data; return firstptr;
// }

// struct linkedlist *nodeinsertionafterparticularnode(struct linkedlist *head, struct linkedlist *getptr, int data){
//     struct linkedlist *ptr= (struct linkedlist *)malloc(sizeof(struct linkedlist));ptr->data=data; ptr->pointer= getptr->pointer; getptr->pointer= ptr; return head;
// }

// struct linkedlist *nodeinsertionatend(struct linkedlist *myfirst, int data){
//     struct linkedlist *ptr= (struct linkedlist*)malloc(sizeof(struct linkedlist));struct linkedlist *pp=myfirst; while(pp->pointer!=NULL){pp=pp->pointer; }pp->pointer=ptr; ptr->pointer= NULL;  ptr->data=data; return myfirst;
// }

// struct linkedlist *deletenodeatfirst(struct linkedlist *fir){
//     struct linkedlist *ptr1= fir; fir=fir->pointer; free(ptr1); return fir;
// }

// struct linkedlist *deletenodeatparticularindex(struct linkedlist *f, int num){
//     struct linkedlist *ptr1=f; int i=0; int j=0; struct linkedlist *ptr3= f;
//     while(i!=num-1){ptr1=ptr1->pointer; i++; }
//     while(j!=num-2){ ptr3=ptr3->pointer; j++; }
//     ptr3->pointer= ptr1->pointer; free(ptr1); return f;
// }

// struct linkedlist *deletenodeatparticularvalue(struct linkedlist *fnode, int val){
//     struct linkedlist *ff= fnode; struct linkedlist *gg=fnode->pointer; while(gg->data!=val && gg->pointer!=NULL){ ff=ff->pointer; gg=gg->pointer; } ff->pointer=gg->pointer; free(gg); return fnode;
// }

// struct linkedlist *deletenodeatend(struct linkedlist *fnode){
//     struct linkedlist *copynode= fnode;
//     struct linkedlist *againcopy= fnode;
//     while(copynode->pointer!=NULL){ copynode=copynode->pointer; }
//     while(againcopy->pointer!=copynode){ againcopy=againcopy->pointer; }
//     againcopy->pointer=NULL; free(copynode); return fnode;
// }

// int main()
// {
//     struct linkedlist *first = (struct linkedlist *)malloc(sizeof(struct linkedlist));
//     struct linkedlist *second = (struct linkedlist *)malloc(sizeof(struct linkedlist));
//     struct linkedlist *third = (struct linkedlist *)malloc(sizeof(struct linkedlist));
//     struct linkedlist *fourth = (struct linkedlist *)malloc(sizeof(struct linkedlist));
//     struct linkedlist *fifth = (struct linkedlist *)malloc(sizeof(struct linkedlist));
//     first->data = 1;
//     first->pointer = second;
//     second->data = 2;
//     second->pointer = third;
//     third->data = 3;
//     third->pointer = fourth;
//     fourth->data = 4;
//     fourth->pointer = fifth;
//     fifth->data = 5;
//     fifth->pointer = NULL;
//     // shownodes(first);
//     // INSERION FUNCTIONS----
//     // shownodes(nodeinsertionatbeginning(first, 10));
//     // shownodes(nodeinsertionatgivenindex(first, 3, 20));
//     // shownodes(nodeinsertionafterparticularnode(first, third, 30));
//     // shownodes(nodeinsertionatend(first, 40));

//     // DELETION FUNCTIONS----
//     // shownodes(deletenodeatfirst(first));
//     // shownodes(deletenodeatparticularindex(first, 2));
//     // shownodes(deletenodeatparticularvalue(first, 3));
//     // shownodes(deletenodeatend(first));
//     return 0;
// }

// CIRCULAR LINKED LIST

// #include<stdio.h>
// #include<stdlib.h>

// struct Node{int data; struct Node *next; };

// void linkkedlistraversal(struct Node *head){
//     struct Node *ptr= head;  printf("element is %d\n", ptr->data);ptr=ptr->next; while(ptr->next!=head){printf("elementt is %d\n", ptr->data); ptr=ptr->next ; }printf("elementtt is %d\n", ptr->data);free(ptr);
// }

// struct Node *insertAtFirst(struct Node *head, int data){
//     struct Node *ptr= (struct Node *) malloc(sizeof(struct Node) );
//     struct Node *p=head->next; ptr->data= data; while(p->next!=head) {p=p->next; } p->next=ptr; ptr->next= head; head= ptr; return head;
// }

// int main(){
//     struct Node *head; struct Node *second; struct Node *third; struct Node *fourth;
//     head= (struct Node *)malloc(sizeof(struct Node ));
//     second= (struct Node *)malloc(sizeof(struct Node ));
//     third= (struct Node *)malloc(sizeof(struct Node ));
//     fourth= (struct Node *)malloc(sizeof(struct Node ));

//     head->data= 4; head->next=second;
//     second->data= 3; second->next=third;
//     third->data= 6; third->next=fourth;
//     fourth->data= 1; fourth->next=head;

//     // linkkedlistraversal(head);
//     linkkedlistraversal(insertAtFirst(head, 10));

//     return 0;
// }

// STACK OPERATION
// #include <stdio.h>
// #include <stdlib.h>

// struct stack
// {
//     int size;
//     int ptr;
//     int *arr;
// };

// int isFull(struct stack *sp)
// {
//     if (sp->ptr == sp->size - 1)
//     {
//         return 1;
//     }
//     return 0;
// }

// void push(struct stack *sp, int num)
// {
//     if (!isFull(sp))
//     {
//         sp->arr[++(sp->ptr)] = num;
//     }
//     else
//     {
//         printf(" cant insert anymore\n");
//     }
// }

// int isEmpty(struct stack *sp)
// {
//     if (sp->ptr == -1)
//     {
//         return 1;
//     }
//     return 0;
// }

// int pop(struct stack *sp)
// {
//     if (!isEmpty(sp))
//     {
//         return sp->arr[(sp->ptr)--];
//     }
//     else
//     {
//         printf(" cant delete anymore\n");
//     }
//     return 0;
// }

// int peekelement(struct stack *sp, int dele)
// {
//     return sp->arr[sp->ptr-(sp->ptr-dele+1)];
// }

// int main()
// {
//     struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
//     sp->size = 5;
//     sp->ptr = -1;
//     sp->arr = (int *)malloc((sp->size) * sizeof(int));
//     // pushing operation
//     if (isFull(sp))
//     {
//         printf(" stack is full\n");
//     }
//     else
//     {
//         push(sp, 56);
//         push(sp, 57);
//         push(sp, 58);
//         push(sp, 59);
//         push(sp, 60);
//     }
//     // PRINTING ALL THE ELEMENTS AFTER INSERTION
//     for (int i = 0; i < sp->ptr + 1; i++)
//     {
//         printf(" the  %d element is %d \n", i + 1, sp->arr[i]);
//     }
//     printf("\n");

//     // POPPING OPERATION
//     if (isEmpty(sp))
//     {
//         printf(" stack underflow\n");
//     }
//     else
//     {
//         pop(sp);
//         pop(sp);
//     //     pop(sp);
//     }

//     // FULL PRINTING OPERATION AFTER SOME DELETION
//     for (int i = 0; i < sp->ptr + 1; i++)
//     {
//         printf(" the  %d element is %d \n", i + 1, sp->arr[i]);
//     }
//     printf("\n");

//     // PRINTING THE ELEMENT  OF THE GIVEN INDEX IN THE ARRAY-----
//     printf(" enter the index of the element that you want");
//     int dele;
//     scanf("%d", &dele);
//     if ((dele <= sp->ptr+1) && (dele >= 1))
//     {
//         printf(" the element has been found \n");
//         printf(" the element is %d\n", peekelement(sp, dele));
//     }
//     else
//     {
//         printf(" enter the correct position\n");
//     }
//     printf("\n");
//     printf("\n");
//     printf(" bottomost element is %d\n", sp->arr[0]);
//     printf(" topmost element is %d\n", sp->arr[sp->ptr]);
//     return 0;
// }

// FOR DOUBLY LINKED LIST PRACTICE [practice set]
// #include <stdio.h>
// #include <stdlib.h>

// struct llist
// {
//     int data;
//     struct llist *next;
// };

// void showall(struct llist *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct llist *insertnodeatbeginning(struct llist *taken)
// {
//     struct llist *ptr = (struct llist *)malloc(sizeof(struct llist));
//     ptr->data = 100;
//     ptr->next = taken;
//     return ptr;
// }

// struct llist *insertnodeatparticularposition(struct llist *taken, int num)
// {
//     struct llist *ptr = (struct llist *)malloc(sizeof(struct llist));
//     struct llist *prev = taken;
//     int j = 0;
//     while (j != num - 2)
//     {
//         prev = prev->next;
//         j++;
//     }
//     ptr->data = 1000;
//     ptr->next = prev->next;
//     prev->next = ptr;
//     return taken;
// }

// struct llist *insertnodeatend(struct llist *end)
// {
//     struct llist *ptr = (struct llist *)malloc(sizeof(struct llist));
//     struct llist *taken = end;
//     while (taken->next != NULL)
//     {
//         taken = taken->next;
//     }
//     taken->next = ptr;
//     ptr->data = 15020;
//     ptr->next = NULL;
//     return end;
// }

// struct llist *deleteatfirst(struct llist *taken)
// {
//     struct llist *again = taken;
//     taken = taken->next;
//     free(again);
//     return taken;
// }

// struct llist *deleteatindex(struct llist *tk, int num)
// {
//     struct llist *ptr2 = tk, *ptr1 = tk;
//     int i = 0;
//     while (i != num - 2)
//     {
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }
//     ptr2 = ptr2->next;
//     ptr1->next = ptr2->next;
//     free(ptr2);
//     return tk;
// }

// struct llist *deleteatend(struct llist *tk)
// {
//     struct llist *ptr = tk, *ppp = tk;
//     while (ptr->next != NULL)
//     {
//         ptr = ptr->next;
//     }
//     while (ppp->next != ptr)
//     {
//         ppp = ppp->next;
//     }
//     ppp->next = NULL;
//     free(ptr);
//     return tk;
// }

// int main()
// {
//     struct llist *first = (struct llist *)malloc(sizeof(struct llist)), *second = (struct llist *)malloc(sizeof(struct llist)), *third = (struct llist *)malloc(sizeof(struct llist)), *fourth = (struct llist *)malloc(sizeof(struct llist));
//     first->data = 10;
//     first->next = second;
//     second->data = 20;
//     second->next = third;
//     third->data = 30;
//     third->next = fourth;
//     fourth->data = 40;
//     fourth->next = NULL;
//     // showall(first);
//     // INSERTION TECHNIQUES

//     showall(insertnodeatbeginning(first));
//     // showall(insertnodeatparticularposition(first, 3));
//     // showall(insertnodeatend(first));

//     // DELETION TECHNIQUES
//     // showall(deleteatfirst(first));
//     // showall(deleteatindex(first, 2));
//     // showall(deleteatend(first));
//     return 0;
// }

// STACK IMPLEMENTATION USING LINKED LIST

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedlistraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf(" Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// int isFull(struct Node *top)
// {
//     struct Node *p = (struct Node *)malloc(sizeof(struct Node));
//     if (p == NULL)
//     {
//         return 1;
//     }
//     return 0;
// }

// struct Node *push(struct Node *top, int x)
// {
//     if (isFull(top))
//     {
//         printf(" stack overflow");
//     }
//     else
//     {
//         struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//         n->data = x;
//         n->next = top;
//         top = n;
//         return top;
//     }
// }

// int isEmpty(struct Node *top)
// {
//     if (top == NULL)
//     {
//         return 1;
//     }
//     return 0;
// }

// int pop(struct Node **top)
// {
//     if (isEmpty(*top))
//     {
//         printf(" stack underflow");
//     }
//     else
//     {
//         struct Node *n = *top;
//         *top = (*top)->next;
//         int x = n->data;
//         free(n);
//         return x;
//     }
// }

// int peek(int pos, struct Node *top)
// {
//     struct Node *ptr = top;
//     for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
//     {
//         ptr = ptr->next;
//     }
//     if (ptr != NULL)
//     {
//         return ptr->data;
//     }
//     else
//     {
//         return -1;
//     }
// }

// int bottomost(struct Node *top)
// {
//     while (top->next != NULL)
//     {
//         top = top->next;
//     }
//     return top->data;
// }

// int main()
// {
//     struct Node *top = NULL;
//     top = push(top, 78);
//     top = push(top, 88);
//     top = push(top, 8);
//     linkedlistraversal(top);
//     // int element = pop(&top);
//     // printf(" the popped element is %d\n", element);
//     // linkedlistraversal(top);
//     printf(" The value at position 1 is %d ", peek(1, top));
//     printf("\n");
//     printf(" The element at the bottomost position is %d ", bottomost(top));
//     return 0;
// }

// SINGLE PARENTHESIS MATCHING--------
// #include <stdio.h>
// #include <stdlib.h>

// struct stack
// {
//     int top;
//     int size;
//     char *arr;
// };

// void push(struct stack *stp, char x)
// {
//     if (stp->top == (stp->size) - 1)
//     {
//         printf(" stack overflow ");
//     }
//     else
//     {
//         stp->arr[++(stp->top)] = x;
//     }
// }

// char pop(struct stack *stp)
// {
//     char py;
//     if ((stp->top) == -1)
//     {
//         printf(" stack underflow ");
//     }
//     else
//     {
//         py = stp->arr[(stp->top)--];
//     }
//     return py;
// }

// int main()
// {
//     char prr[] = "(a())))b)c(d))r(((((()00)))))e";
//     struct stack *stp = (struct stack *)malloc(sizeof(struct stack));
//     stp->top = -1;
//     stp->size = sizeof(prr) / sizeof(prr[0]);
//     stp->arr = (char *)malloc((stp->size) * sizeof(char));
//     for (int i = 0; i < sizeof(prr) / sizeof(prr[0]); i++)
//     {
//         if (prr[i] == '(')
//         {
//             push(stp, prr[i]);
//         }
//         else if (prr[i] == ')')
//         {
//             if ((stp->top) != -1)
//             {
//                 pop(stp);
//             }
//             else
//             {
//                 stp->top = 0;
//                 goto end;
//             }
//         }
//     }
// end:
//     if ((stp->top) != -1)
//     {
//         printf("wrong parenthesis");
//     }
//     else
//     {
//         printf("right parenthesis");
//     }
//     return 0;
// }

// QUEUE IMPLEMENTATION USING ARRAY

// #include <stdio.h>
// #include <stdlib.h>

// struct queue
// {
//     int f;
//     int b;
//     int size;
//     int *arr;
// };

// int isFull(struct queue *stp)
// {
//     if (stp->b == (stp->size) - 1)
//     {
//         return 1;
//     }
//     return 0;
// }

// void push(struct queue *stp, int x)
// {
//     if (!isFull(stp))
//     {
//         stp->arr[++(stp->b)] = x;
//     }
//     else
//     {
//         printf(" queue is full\n");
//     }
// }

// void display(struct queue *stp)
// {
//     int go = stp->b;
//     while (go != stp->f)
//     {
//         printf("%d \n", stp->arr[go]);
//         go--;
//     }
// }

// int isEmpty(struct queue *stp)
// {
//     if (stp->b == stp->f)
//     {
//         return 1;
//     }
//     return 0;
// }

// int pop(struct queue *stp)
// {
//     if (!isEmpty(stp))
//     {
//         return stp->arr[++(stp->f)];
//     }
//     else
//     {
//         printf(" stack underflow");
//     }
// }

// int main()
// {
//     struct queue *stp = (struct queue *)malloc(sizeof(struct queue));
//     stp->b = -1;
//     stp->f = -1;
//     stp->size = 6;
//     stp->arr = (int *)malloc((stp->size) * (sizeof(int)));
//     push(stp, 10);
//     push(stp, 20);
//     push(stp, 30);
//     push(stp, 40);
//     push(stp, 50);
//     push(stp, 60);
//     display(stp);
//     printf("\n");
//     pop(stp);
//     pop(stp);
//     pop(stp);
//     pop(stp);
//     pop(stp);
//     printf("\n");
//     display(stp);
//     return 0;
// }

// CIRCULAR QUEUE------------
// #include <stdio.h>
// #include <stdlib.h>

// struct queue
// {
//     int b;
//     int f;
//     int size;
//     int *arr;
// };

// int isFull(struct queue *fgh)
// {
//     if ((fgh->b + 1) % fgh->size == fgh->f)
//     {
//         return 1;
//     }
//     return 0;
// }
// void enqueue(struct queue *fgh, int x)
// {
//     if (isFull(fgh))
//     {
//         printf(" queue is full");
//     }
//     else
//     {
//         fgh->b = (fgh->b + 1) % (fgh->size);
//         fgh->arr[fgh->b] = x;
//     }
// }
// void display(struct queue *fgh)
// {
//     for (int i = fgh->f + 1; i <= fgh->b; i++)
//     {
//         printf("%d ", fgh->arr[i]);
//     }
// }
// int isEmpty(struct queue *fgh){if(fgh->b==fgh->f){return 1; }return 0; }
// int dequeue(struct queue *fgh)
// {
//     if(!isEmpty(fgh)){fgh->f++;
//     return fgh->arr[fgh->f];}else{printf(" queue is empty"); }
// }
// int main()
// {
//     struct queue *fgh = (struct queue *)malloc(sizeof(struct queue));
//     fgh->b = 0;
//     fgh->f = 0;
//     fgh->size = 6;
//     fgh->arr = (int *)malloc(sizeof(fgh->size) * sizeof(int));
//     enqueue(fgh, 10);
//     enqueue(fgh, 20);
//     enqueue(fgh, 30);
//     enqueue(fgh, 40);
//     enqueue(fgh, 50);
//     display(fgh);
//     dequeue(fgh);
//     printf("\n");
//     display(fgh);
//     return 0;
// }

// BINARY TREE PSEUDO CODE------
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// struct node *createnode(int data)
// {
//     struct node *n = (struct node *)malloc(sizeof(struct node));
//     n->data = data; // setting the data
//     n->left = NULL;
//     n->right = NULL; // setting the left and the right children to NULL
//     return n; // finally returning the node ----
// }

// int main()
// {
//     /*
//     // ROOT NODE CONSTRUCTION----
//     struct node *p = (struct node *)malloc(sizeof(struct node));
//     p->left = NULL;
//     p->right = NULL;

//     // SECOND NODE CONSTRUCTION----
//     struct node *p1 = (struct node *)malloc(sizeof(struct node));
//     p1->left = NULL;
//     p1->right = NULL;

//     // THIRD NODE CONSTRUCTION---
//     struct node *p2 = (struct node *)malloc(sizeof(struct node));
//     p2->left = NULL;
//     p2->right = NULL;

//     */

//     // Constructing the root node using functions ---
//      struct node *p=createnode(2);
//      struct node *p1=createnode(1);
//      struct node *p2=createnode(4);

//     // LINKING THE ROOT NODE WITH THE LEFT AND THE RIGHT CHILDREN
//     p->left = p1;
//     p->right = p2;

//     return 0;
// }

// PREORDER/ POSTORDER/ INORDER TRAVERSAL OF AS BINARY TREE-- --
//          4
//       /    \
        //      1       6
//    /   \
        //  5       2

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };
// struct node *createnode(int data)
// {
//     struct node *n = (struct node *)malloc(sizeof(struct node)); // creating a node pointer
//     n->data = data;
//     n->left = NULL;
//     n->right = NULL;
//     return n;
// }

// void preorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d ", root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// void postorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         postorder(root->left);
//         postorder(root->right);
//         printf("%d ", root->data);
//     }
// }

// void inorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         inorder(root->left);
//         printf("%d ", root->data);
//         inorder(root->right);
//     }
// }

// int main()
// {
//     struct node *p = createnode(4);
//     struct node *p1 = createnode(1);
//     struct node *p2 = createnode(6);
//     struct node *p3 = createnode(5);
//     struct node *p4 = createnode(2);

//     // linking the root node with the left and the right children--
//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;
//     printf("the preorder traversal is \n");
//     preorder(p);
//     printf("\n");
//     printf("the postorder traversal is \n");
//     postorder(p);
//     printf("\n");
//     printf("the inorder traversal is \n");
//     inorder(p);
//     return 0;
// }

#include <stdio.h>
#include <cstdlib>

struct Node
{
  int data;
  Node *link;
};
Node *AllocNode(int data)
{
  Node *p = new Node;
  p->data = data;
  p->link = NULL;
  return p;
}
void AddNode(Node *&head, int data)
{
  if (head == NULL)
    head = AllocNode(data);
  else
  {
    Node *tail;
    for (tail = head; tail->link != NULL; tail = tail->link)
      ;
    tail->link = AllocNode(data);
  }
}
void PrintNode(Node *head)
{
  for (Node *p = head; p != NULL; p = p->link)
    printf("%d ", p->data);
}
void DestroyNode(Node* head)
{
  for(Node* p = head ; p != NULL ;)
  {
    Node* np = p->link;
    delete p ;
    p = np ; 
  }
}
////////////////////////////////////////////////////////////////
struct Graph
{
  Node **head;
  int verSize ;
};
void AddEdge(Graph*pg, int sv, int ev)
{
  AddNode(pg->head[sv], ev);
}
void PrintGraph(Graph *pg)
{
  printf("%V : ");
  for(int i = 0 ; i < pg->verSize ; i++)
    printf("%d ", i );
  printf("\n");
  for (int i = 0; i < pg->verSize; i++)
    {
      printf("E : ");
    for(Node* p = pg->head[i]; p != NULL; p= p->link)
      printf("(%d,%d) ", i, p->data);
    printf("\n");
    }
}
void InitGraph(Graph *pg, int verSize)
{
  pg->verSize = verSize;
  pg->head = new Node*[verSize];
  for(int i = 0; i < verSize; i++)
    pg->head[i] = NULL;
}
void UninitGraph(Graph *pg)
{
  for (int i = 0; i < pg->verSize; i++)
    DestroyNode(pg->head[i]);
  delete[] pg->head;
}
void _DFS(Graph *pg, int ver, int* visited)
{
  visited[ver] = 1;
  printf("%d ", ver);
  for(Node* p = pg->head[ver]; p != NULL; p = p->link)
    {
      if( !visited[p->data])
        _DFS(pg, p->data, visited);
    }
}
void DFS(Graph* pg, int ver)
{
  int* visited = new int[pg->verSize];
  for(int i = 0 ; i< pg->verSize; ++i)
    visited[i] = 0;
    
  _DFS(pg, ver, visited);
  printf("\n");
  delete[] visited;
}
int main(int argc, char const *argv[])
{
  Graph g;

  InitGraph(&g, 5);

  AddEdge(&g, 0, 1);
  AddEdge(&g, 0, 3);
  AddEdge(&g, 1, 0);
  AddEdge(&g, 1, 2);
  AddEdge(&g, 1, 3);
  AddEdge(&g, 2, 1);
  AddEdge(&g, 2, 3);
  AddEdge(&g, 3, 0);
  AddEdge(&g, 3, 1);
  AddEdge(&g, 3, 2);
  AddEdge(&g, 3, 4);
  AddEdge(&g, 4, 3);

  PrintGraph(&g);

  DFS(&g, 0);

  UninitGraph(&g);

  return 0;
}
// #include <stdio.h>
// #include <cstdlib>

// struct Node
// {
//   int data;
//   Node *link;
// };
// Node *AllocNode(int data)
// {
//   Node *p = new Node;
//   p->data = data;
//   p->link = NULL;
//   return p;
// }
// void AddNode(Node *&head, int data)
// {
//   if (head == NULL)
//     head = AllocNode(data);
//   else
//   {
//     Node *tail;
//     for (tail = head; tail->link != NULL; tail = tail->link)
//       ;
//     tail->link = AllocNode(data);
//   }
// }
// void PrintNode(Node *head)
// {
//   for (Node *p = head; p != NULL; p = p->link)
//     printf("%d ", p->data);
// }
// void DestroyNode(Node* head)
// {
//   for(Node* p = head ; p != NULL ;)
//   {
//     Node* np = p->link;
//     delete p ;
//     p = np ; 
//   }
// }
// ////////////////////////////////////////////////////////////////
// struct Graph
// {
//   Node **head;
//   int verSize ;
// };
// void AddEdge(Graph*pg, int sv, int ev)
// {
//   AddNode(pg->head[sv], ev);
// }
// void PrintGraph(Graph *pg)
// {
//   printf("%V : ");
//   for(int i = 0 ; i < pg->verSize ; i++)
//     printf("%d ", i );
//   printf("\n");
//   for (int i = 0; i < pg->verSize; i++)
//     {
//       printf("E : ");
//     for(Node* p = pg->head[i]; p != NULL; p= p->link)
//       printf("(%d,%d) ", i, p->data);
//     printf("\n");
//     }
// }
// void InitGraph(Graph *pg, int verSize)
// {
//   pg->verSize = verSize;
//   pg->head = new Node*[verSize];
//   for(int i = 0; i < verSize; i++)
//     pg->head[i] = NULL;
// }
// void UninitGraph(Graph *pg)
// {
//   for (int i = 0; i < pg->verSize; i++)
//     DestroyNode(pg->head[i]);
//   delete[] pg->head;
// }
// void _DFS(Graph *pg, int ver, int* visited)
// {
//   visited[ver] = 1;
//   printf("%d ", ver);
//   for(Node* p = pg->head[ver]; p != NULL; p = p->link)
//     {
//       if( !visited[p->data])
//         _DFS(pg, p->data, visited);
//     }
// }
// void DFS(Graph* pg, int ver)
// {
//   int* visited = new int[pg->verSize];
//   for(int i = 0 ; i< pg->verSize; ++i)
//     visited[i] = 0;
    
//   _DFS(pg, ver, visited);
//   printf("\n");
//   delete[] visited;
// }
// int main(int argc, char const *argv[])
// {
//   Graph g;

//   InitGraph(&g, 5);

//   AddEdge(&g, 0, 1);
//   AddEdge(&g, 0, 3);
//   AddEdge(&g, 1, 0);
//   AddEdge(&g, 1, 2);
//   AddEdge(&g, 1, 3);
//   AddEdge(&g, 2, 1);
//   AddEdge(&g, 2, 3);
//   AddEdge(&g, 3, 0);
//   AddEdge(&g, 3, 1);
//   AddEdge(&g, 3, 2);
//   AddEdge(&g, 3, 4);
//   AddEdge(&g, 4, 3);

//   PrintGraph(&g);

//   DFS(&g, 0);

//   UninitGraph(&g);

//   return 0;
// }

// #include <stdio.h>
// #include <cstdlib>

// struct Node
// {
//   int data;
//   Node *link;
// };
// Node *AllocNode(int data)
// {
//   Node *p = new Node;
//   p->data = data;
//   p->link = NULL;
//   return p;
// }
// void AddNode(Node *&head, int data)
// {
//   if (head == NULL)
//     head = AllocNode(data);
//   else
//   {
//     Node *tail;
//     for (tail = head; tail->link != NULL; tail = tail->link)
//       ;
//     tail->link = AllocNode(data);
//   }
// }
// void PrintNode(Node *head)
// {
//   for (Node *p = head; p != NULL; p = p->link)
//     printf("%d ", p->data);
// }
// void DestroyNode(Node* head)
// {
//   for(Node* p = head ; p != NULL ;)
//   {
//     Node* np = p->link;
//     delete p ;
//     p = np ; 
//   }
// }
// ////////////////////////////////////////////////////////////////
// struct Graph
// {
//   Node **head;
//   int verSize ;
// };
// void AddEdge(Graph*pg, int sv, int ev)
// {
//   AddNode(pg->head[sv], ev);
// }
// void PrintGraph(Graph *pg)
// {
//   printf("%V : ");
//   for(int i = 0 ; i < pg->verSize ; i++)
//     printf("%d ", i );
//   printf("\n");
//   for (int i = 0; i < pg->verSize; i++)
//     {
//       printf("E : ");
//     for(Node* p = pg->head[i]; p != NULL; p= p->link)
//       printf("(%d,%d) ", i, p->data);
//     printf("\n");
//     }
// }
// void InitGraph(Graph *pg, int verSize)
// {
//   pg->verSize = verSize;
//   pg->head = new Node*[verSize];
//   for(int i = 0; i < verSize; i++)
//     pg->head[i] = NULL;
// }
// void UninitGraph(Graph *pg)
// {
//   for (int i = 0; i < pg->verSize; i++)
//     DestroyNode(pg->head[i]);
//   delete[] pg->head;
// }
// int main(int argc, char const *argv[])
// {
//   Graph g;

//   InitGraph(&g, 5);

//   AddEdge(&g, 0, 1);
//   AddEdge(&g, 0, 3);
//   AddEdge(&g, 1, 0);
//   AddEdge(&g, 1, 2);
//   AddEdge(&g, 1, 3);
//   AddEdge(&g, 2, 1);
//   AddEdge(&g, 2, 3);
//   AddEdge(&g, 3, 0);
//   AddEdge(&g, 3, 1);
//   AddEdge(&g, 3, 2);
//   AddEdge(&g, 3, 4);
//   AddEdge(&g, 4, 3);

//   PrintGraph(&g);

//   UninitGraph(&g);

//   return 0;
// }

// #include <stdio.h>
// #include <cstdlib>

// struct Node
// {
//   int data;
//   Node *link;
// };
// Node *AllocNode(int data)
// {
//   Node *p = new Node;
//   p->data = data;
//   p->link = NULL;
//   return p;
// }
// void AddNode(Node *&head, int data)
// {
//   if (head == NULL)
//     head = AllocNode(data);
//   else
//   {
//     Node *tail;
//     for (tail = head; tail->link != NULL; tail = tail->link)
//       ;
//     tail->link = AllocNode(data);
//   }
// }
// void PrintNode(Node *head)
// {
//   for (Node *p = head; p != NULL; p = p->link)
//     printf("%d ", p->data);
// }
// ////////////////////////////////////////////////////////////////
// struct Graph
// {
//   Node **head;
// };
// void AddEdge(Graph*pg, int sv, int ev)
// {
//   AddNode(pg->head[sv], ev);
// }
// void PrintGraph(Graph *pg)
// {
//   printf("%V : ");
//   for(int i = 0 ; i < 5 ; ++i)
//     printf("%d ", i );
//   printf("\n");
//   for (int i = 0; i < 5; i++)
//     {
//       printf("E : ");
//     for(Node* p = pg->head[i]; p != NULL; p= p->link)
//       printf("(%d,%d) ", i, p->data);
//     printf("\n");
//     }
// }
// void InitGraph(Graph *pg, int verSize)
// {
//   pg->head = new Node*[verSize];
//   for(int i = 0; i < verSize; i++)
//     pg->head[i] = NULL;
// }
// void UninitGraph(Graph *pg)
// {
//   delete[] pg->head;
// }
// int main(int argc, char const *argv[])
// {
//   Graph g;

//   InitGraph(&g, 5);

//   AddEdge(&g, 0, 1);
//   AddEdge(&g, 0, 3);
//   AddEdge(&g, 1, 0);
//   AddEdge(&g, 1, 2);
//   AddEdge(&g, 1, 3);
//   AddEdge(&g, 2, 1);
//   AddEdge(&g, 2, 3);
//   AddEdge(&g, 3, 0);
//   AddEdge(&g, 3, 1);
//   AddEdge(&g, 3, 2);
//   AddEdge(&g, 3, 4);
//   AddEdge(&g, 4, 3);

//   PrintGraph(&g);

//   UninitGraph(&g);

//   return 0;
// }

// #include <stdio.h>
// #include <cstdlib>

// struct Node
// {
//   int data;
//   Node *link;
// };
// Node *AllocNode(int data)
// {
//   Node *p = new Node;
//   p->data = data;
//   p->link = NULL;
//   return p;
// }
// void AddNode(Node *&head, int data)
// {
//   if (head == NULL)
//     head = AllocNode(data);
//   else
//   {
//     Node *tail;
//     for (tail = head; tail->link != NULL; tail = tail->link)
//       ;
//     tail->link = AllocNode(data);
//   }
// }
// void PrintNode(Node *head)
// {
//   for (Node *p = head; p != NULL; p = p->link)
//     printf("%d ", p->data);
// }
// int main(int argc, char const *argv[])
// {
//   Node *head = NULL;
//   AddNode(head, 10);
//   AddNode(head, 20);
//   AddNode(head, 30);
//   AddNode(head, 40);
//   AddNode(head, 50);

//   PrintNode(head);
//   return 0;
// }

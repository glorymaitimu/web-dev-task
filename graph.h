#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define child(P) (P)->child
#define infoEdge(P) (P)->infoEdge

typedef struct Vertex *adrNode;
typedef struct Edge *adrEdge;

struct Vertex{
    char info;
    adrNode next;
    adrEdge child;
};

struct Edge{
    char infoEdge;
    adrEdge next;
};


adrNode newNode_1301213102(char x);
void addNode_1301213102(adrNode &G, adrNode P);
adrNode findNode_1301213102(adrNode G, char x);
void addEdge_1301213102(adrNode &G, char x, char y);
bool isConnected_1301213102(adrNode G, char x, char y);
void printGraph_1301213102(adrNode G);

#endif // GRAPH_H_INCLUDED

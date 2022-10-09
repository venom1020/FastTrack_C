typedef struct nodes{
int weight;
int x,y;
int label;
int edge;
} nodes;

void acceptXY(nodes[],int);
int check(nodes[],int,int,int);
void findMaxNode(nodes[],int);
void makeConnections(nodes[],int);
int randomLabel(int);
void countVandHlines(nodes[],int,int*,int*);

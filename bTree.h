#ifndef BTREE_H_INCLUDED
#define BTREE_H_INCLUDED

typedef struct node
{
    unsigned int key;
    struct node *left;
    struct node *right;
} node ;

#ifdef __cplusplus
extern "C" {
#endif

    void addNode(node **tree, unsigned int key);

    int searchNode(node *tree, unsigned int key);

    void printTree(node *tree);

    void printReverseTree(node *tree);

    void clearTree(node **tree);

#ifdef __cplusplus
}
#endif

#endif // BTREE_H_INCLUDED

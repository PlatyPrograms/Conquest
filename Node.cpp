#include "Node.h"

/*
 * takes current piece, array of adjacent nodes, and index; initializes a new node
 * based on those parameters
 * NOTE: could also take and AdjacentNodeList and handle its creation in config parse
 */
Node::Node(Piece p, int[] a, int[] b, int i) {
    piece = p;
    for (int adj : a) {
	adjacents.add(adj);
    }
    for (int brg : b) {
	bridged.add(brg);
    }
    index = i;
}
    
/*
 * checks if there is a piece on the node already
 */
Node::boolean isEmpty() {
    return (!piece);
}
    
/*
 * adds a piece to the node
 */
Node::void addPiece(Piece * toAdd) {
    piece = toAdd;
}
    
/*
 * deletes the current piece
 */
Node::void killPiece() {
    delete piece;
}
    
/*
 * pops the current piece off of the node, returns it
 * will return NULL if piece is NULL
 * for use in moving, attacking in conjuction with killPiece and addPiece
 */
Node::Piece * getPiece() {
    Piece * ret = piece;
    delete piece;
    return ret;
}
    
/*
 * checks if the node with index toTest is adjacent to the current node
 */
Node::boolean isAdjacent(int toTest) {
    return (adjacents->contains(toTest));
}

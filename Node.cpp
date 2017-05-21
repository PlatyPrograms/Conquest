class Node {
public:
    Piece * piece;
    AdjacentNodeList * adjacents;
    AdjacentNodeList * bridged;
    int index;
    
    /*
     * takes current piece, array of adjacent nodes, and index; initializes a new node
     * based on those parameters
     * NOTE: could also take and AdjacentNodeList and handle its creation in config parse
     */
    Node(Piece p, int[] a, int[] b, int i) { // 1
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
    boolean isEmpty() { // 1
	return (!piece);
    }
    
    /*
     * adds a piece to the node
     */
    void addPiece(Piece * toAdd) { // 1
	piece = toAdd;
    }
    
    /*
     * deletes the current piece
     */
    void killPiece() { // 1
	delete piece;
    }
    
    /*
     * pops the current piece off of the node, returns it
     * will return NULL if piece is NULL
     * for use in moving, attacking in conjuction with killPiece and addPiece
     */
    Piece * getPiece() { // 1
	Piece * ret = piece;
	delete piece;
	return ret;
    }
    
    /*
     * checks if the node with index toTest is adjacent to the current node
     */
    boolean isAdjacent(int toTest) { // 1
	return (adjacents->contains(toTest));
    }
};

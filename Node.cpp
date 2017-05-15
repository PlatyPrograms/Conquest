class Node {
public:
    Piece * piece;
    AdjacentNodeList * adjacents;
    int index;
    /*
     * takes current piece, array of adjacent nodes, and index; initializes a new node
     * based on those parameters
     * NOTE: could also take and AdjacentNodeList and handle its creation in config parse
     */
    Node(Piece p, int[] a, int i) { // 1
	piece = p;
	for (int adjIndex : a) {
	    adjacents.add(adjIndex);
	}
	index = i;
    }
    /*
     * checks if there is a piece on the node already
     */
    boolean isEmpty() { // 1
	return (piece == NULL);
    }
    /*
     * adds a piece to the node; useful only for initialization
     */
    void addPiece(Piece toAdd) { // 1
	piece = toAdd;
    }
    /*
     * deletes the current piece
     */
    void killPiece() { // 1
	delete piece;
	piece = NULL;
    }
    /*
     * pops the current piece off of the node, returns it
     * will return NULL if piece is NULL
     * for use in moving, attacking in conjuction with killPiece and addPiece
     */
    Piece * getPiece() { // 1
	Piece * ret = piece;
	piece = NULL;
	return ret;
    }
    /*
     * checks if the node with index toTest is adjacent to the current node
     */
    boolean isAdjacent(int toTest) { // 1
	return (adjacents->contains(toTest));
    }
};

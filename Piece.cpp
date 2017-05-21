class Piece {
public:
    int type; // see idGuide
    int maxEmbark; // maximum pieces that can be embarked
    Node * curNode; // current location
    std::list<Piece*> embarked; // embarked pieces

    /*
     * embarks the piece at source onto the current piece
     * returns false if source is empty, the piece cannot be embarked, etc
     * returns true if embarcation succeeds
     */
    boolean embarkPiece(Node * source) { // 0
	if (source->isEmpty() || embarked.size() >= maxEmbark ||
	    !source->isAdjacent(curNode->index)) {
	    return false;
	}
	Piece * toEmbark = source->getPiece();
	embarked.push_back(toEmbark);
	return true;
    }

    /*
     * disembarks a piece of type toDisembark
     */
    boolean disembarkPiece(int toDisembark, Node * destination) { // 0
	Piece * disembarking = NULL;
	for (Piece * p : embarked) {
	    if (p->type == toDisembark) {
		disembarking = p;
		break;
	    }
	}
	if (!disembarking || !disembarking.canMove(destination)) {
	    return false;
	}
	embarked.remove(disembarking);
	destination.addPiece(disembarking);
    }
};

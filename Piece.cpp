class Piece {
public:
    int type; // see idGuide
    int maxEmbark; // maximum pieces that can be embarked
    Node * curNode; // current location
    std::list<Piece*> embarked; // embarked pieces
    std::list<int> canMove; // types that can be moved to
    std::list<int> canKill; // types that can be killed

    /*
     * embarks the piece at source onto the current piece
     * returns false if source is empty, the piece cannot be embarked, etc
     * returns true if embarcation succeeds
     */
    boolean embarkPiece(Node * source) { // 1
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
    boolean disembarkPiece(int toDisembark, Node * destination) { // 1
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

    /*
     * returns whether piece can move to destination
     */
    boolean canMove(Node * destination) { // 0
	boolean isFound = false;
	for (int i : canMove) {
	    if (i == destination->type) {
		isFound == true;
		break;
	    }
	}
	if (!isFound) {
	    return false;
	}
	return this.canKill(destination->piece);
    }

    /*
     * returns whether piece can kill target piece
     */
    boolean canKill(Piece * target) {
	if (target) {
	    for (int i : canKill) {
		if (i == target->type) {
		    return true;
		}
	    }
	    return false;
	}
	return true;
    }
};

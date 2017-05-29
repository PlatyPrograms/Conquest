#include "Piece.h"

/*
 * embarks the piece at source onto the current piece
 * returns false if source is empty, the piece cannot be embarked, etc
 * returns true if embarcation succeeds
 */
Piece::boolean embarkPiece(Node * source) {
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
Piece::boolean disembarkPiece(int toDisembark, Node * destination) {
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
Piece::boolean canMove(Node * destination) {
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
Piece:: boolean canKill(Piece * target) {
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

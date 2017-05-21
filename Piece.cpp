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
	if (toEmbark->curNode->isAdjacent(curNode->index) && embarked.size() < maxEmbark) {
	    toEmbark.curNode->
    }
    boolean disembarkPiece(Piece * toDisembark, Node * destination) { // 0
    }
};
